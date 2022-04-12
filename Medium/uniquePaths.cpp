//https://leetcode.com/problems/unique-paths/
#include<iostream>
#include<vector>
using namespace std;

int uniquePaths(int m, int n);

int main()
{
    int m = 1, n =1;
    int result = uniquePaths(m,n);
    cout<<result;
    return 0;
}

int uniquePaths(int m, int n)
{
    vector<vector<int>> dp(m, vector<int>(n));
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            if( r == 0 || c == 0)
                dp[r][c] = 1;
            else
                dp[r][c] = dp[r][c - 1] + dp[r - 1][c];
        }
        
    }
    return dp[m - 1][n - 1];
}

/* old solution
int uniquePaths(int m, int n)
{
    vector<vector<int>> dp(m, vector<int>(n));
    dp[0][0] = 0;
    if(m == 1 && n == 1) 
        dp[0][0] = 1;
    for (int r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            if(r == 0 && c == 0)
                continue;
            else if( r == 0 || c == 0)
                dp[r][c] = 1;
            else
                dp[r][c] = dp[r][c - 1] + dp[r - 1][c];
        }
        
    }
    return dp[m - 1][n - 1];
}*/