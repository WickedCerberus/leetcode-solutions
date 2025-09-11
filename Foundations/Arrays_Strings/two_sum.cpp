class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        //==================O(N^2)====================
        // vector<int> idx(2);
        // for(int i = 0; i < nums.size(); i++){
        //     for (int j=i+1; j < nums.size(); j++ ){
        //         if (nums[i]+nums[j]==target) {
        //         idx[0]=i;
        //         idx[1]=j;
        //         break;
        //         }
        //     }
        // }
        // return idx;
        //===============================================

        //===============================================

        unordered_map<int, int> idx;

        for (int i = 0; i < nums.size(); i++)
        {
            int comp = target - nums[i];
            if (idx.find(comp) != idx.end())
            {
                return {idx[comp], i};
            }
            idx[nums[i]] = i;
        }

        return {};
    }
};