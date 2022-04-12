
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int Sqrt(int x);

int main()
{

    int num = 1;
    cout << Sqrt(num);
    return 0;
}

int Sqrt(int x)
{
    int left = 0, right = x;
        int ans = -1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if((long long) mid * mid <= x) {
                ans = mid;
                left = mid + 1; // we're looking for the last element satisfying the condition
            }
            else {
                right = mid - 1;
            }
        }
    return ans;    
}
