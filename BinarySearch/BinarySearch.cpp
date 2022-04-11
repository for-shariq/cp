#include<vector>
#include<iostream>
using namespace std;

int search(vector<int>& nums, int target);

int main()
{ 
    //[-1,0,3,5,9,12], target = 2
    vector<int> vec {-1,0,3,5,9,12};
    /*vec.push_back(-1);    
    vec.push_back(0);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(9);
    vec.push_back(12);*/


    int result = search(vec,3);
    cout<<result;
    return 0;
}

 int search(vector<int>& nums, int target) {

    int k = 0;
    int n = nums.size();
    for (int b = n/2; b >= 1; b /= 2) {
    while (k+b < n && nums[k+b] <= target) k += b;
    }
    if (nums[k] == target) {
        return k;
    }
    return -1;
    // int left = 0 , right = nums.size() - 1;
    // int mid, ans = -1;
    // while(left <= right)
    // {
    //     mid = left + (right - left) / 2;
    //     if (nums[mid] <= target)
    //     {
    //         ans = mid;
    //         left = mid + 1;
    //     }
    //     else
    //         right = mid -1;
        
    // }
    // return ans;
}