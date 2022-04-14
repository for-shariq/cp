#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int best = 0;
    vector<int> arr {-1,2,4,-3,5,2,-5,2};

    for (int a = 0; a < arr.size(); a++)
    {
        int sum = 0;
        for (int b = a; b < arr.size(); b++)
        {
            sum += arr[b];
            best = max(best, sum);
        }
        
    }
    cout << best <<endl;

    return 0;
}

/*
for (int k = 0; k < n; k++) {
sum = max(array[k],sum+array[k]);
best = max(best,sum);
}
cout << best << "\n";
*/