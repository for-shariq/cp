#include<iostream>
#include<vector>
using namespace std;

bool canJump(vector<int>& nums);

int main()
{
    vector<int> nums {3,2,1,0,4};
    cout << canJump(nums);

    return 1;
}

bool canJump(vector<int>& nums)
{
    int canReach = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (canReach < i)
        {
            return false;
        }
        canReach = max(canReach, i + nums[i]);
    }
    
    return true;    
}