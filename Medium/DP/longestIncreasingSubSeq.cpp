#include<iostream>
#include<vector>
using namespace std;


int LongestIncreasingSubSeq(vector<int> nums);

int main()
{
    vector<int> nums {6,2,5,1,7,4,8,3};
    LongestIncreasingSubSeq(nums);
}

int LongestIncreasingSubSeq(vector<int> nums)
{
    vector<int> dp(nums.size());
    int best = dp[0];
    for(int k=0; k<nums.size(); k++)
    {
        dp[k] = 1;
        for(int i = 0; i < k; i++)
        {
            if (nums[i] < nums[k])
            {
                dp[k] = max(dp[k], dp[i] + 1);
            }            
        }
        best = max(best, dp[k]);
    }
    return best;
}