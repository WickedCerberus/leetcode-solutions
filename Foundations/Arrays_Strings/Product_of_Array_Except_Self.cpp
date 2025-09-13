class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        //===================HellNaw====================
        // vector <int> answer(nums.size());
        // int product=1, zeroCount=0;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]==0) {
        //         zeroCount++;
        //         if(zeroCount > 1) return answer;
        //         continue;
        //     }
        //     product *= nums[i];
        // }

        // if(zeroCount==0){
        //     for(int i=0; i<nums.size(); i++){
        //         answer[i] = product / nums[i];
        //     }
        // return answer;
        // }

        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]==0){
        //         answer[i] = product;
        //     }
        // }
        // return answer;
        //===================HellNaw====================

        vector<int> answer(nums.size(), 1);
        int left = 1, right = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            answer[i] = answer[i] * left;
            left = left * nums[i];
        }
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            answer[i] *= right;
            right *= nums[i];
        }
        return answer;
    }
};
