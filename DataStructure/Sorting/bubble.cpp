#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int best = 0;
    vector<int> arr {-1,2,4,-3,5,2,-5,2};

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size()-1; j++) 
        {
            if (arr[j] > arr[j+1]) 
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return 0;
}