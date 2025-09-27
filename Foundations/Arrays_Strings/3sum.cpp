class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> merged;

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue; // skip duplicate i

            int two_sum = 0 - nums[i];
            int j = i + 1, k = nums.size() - 1;
            while (j < k) {
                if (nums[j] + nums[k] == two_sum) {
                    merged.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j-1]) j++; // skip duplicate j
                    while (j < k && nums[k] == nums[k+1]) k--; // skip duplicate k
                } else if (nums[j] + nums[k] < two_sum) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return merged;
    }
};

