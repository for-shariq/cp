#include<iostream>
#include<vector>
using namespace std;

int combinationSum4(vector<int>& nums, int target);

int main()
{
    vector<int> nums {1,2,3};
    combinationSum4(nums,4);
}

int combinationSum4(vector<int>& nums, int target)
{
    vector<int> dp(target + 1,0);
    dp[0] = 1;
    for (int i = 1; i <= target; i++)
    {
        // for (int j = 0; j < nums.size(); j++)
        // { 
        //     int x = nums[j];
        //     if(i >= x )
        //        dp[i] += dp[i - x];
        // }
        for(int x : nums)
            if (x <= i)
            {
                dp[i] += dp[i - x];
            }
            
    }
    return dp[target];
}