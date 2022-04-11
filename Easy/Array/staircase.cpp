#include<iostream>
#include<vector>
using namespace std;


int climbStairs(int n);


int main()
{
    int n = 3;
    climbStairs(n);
    return 0;
}

int climbStairs(int n)
{
    if(n == 1) return 1;
    int  i = 1, j = 1, ans = 2;
    for (int k = 2; k < n; k++)
    {
        int x = i + j;
        ans = x + j;
        i = j;
        j = x;
        
    }
    
    return ans;
    //vector<int> arr(n + 1);
    // arr[0] = 0;
    // arr[1] = 1;
    // for (int i = 2; i < n + 1; i++)
    // {
    //     arr[i] = arr[i - 1] + arr[i - 2];
    // }
    // return arr[n + 1];
}