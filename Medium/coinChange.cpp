
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

//int solve(vector<int> coins, int n);
int coinChange(vector<int>& coins, int n);

int main()
{
    vector<int> coins {1,3,5};
    int sum = 11;
    cout << coinChange(coins, sum);
    return 0;
}

int coinChange(vector<int>& coins, int n) 
{
    vector<int> dp(n+1,0);
    dp[0] = 0;
    for(int x = 1; x<=n; x++)
    {
        dp[x] = INT_MAX - 100;
        for(int c: coins)
        {
            if (x-c >= 0)
            {
                dp[x] = min(dp[x], dp[x-c] + 1);
            }
            
        }
    }
    return abs(dp[n]) == INT_MAX - 100 ? -1 : dp[n];
}
/*
from book get all possible values
int solve(vector<int> coins, int n)
{
    // vector<int> count(n+1,0);
    // count[0] = 1;
    // for(int x = 1; x <= n; x++)
    // {
    //     for(int c : coins)
    //     {
    //         if(x - c >= 0)
    //         {
    //             count[x] += count[x-c];
    //         }
    //     }
    // }
    // return 1;
}
*/