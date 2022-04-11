#include<iostream>
#include<vector>
#include<cmath>

int guess(int num);

int guessNumber(int n)
{
    int left = 1, right = n;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        int x = guess(mid);
        if(x == 0 )
            return mid;
        if(x == -1)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}
