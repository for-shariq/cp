#include<iostream>
#include<vector>
using namespace std;

 int fib(int n);

 int main()
 {
     int n = 6;
     //cin>>n;
     cout<<fib(n);
     return 0;
 }

 int fib(int n)
 {
    if(n == 1 || n == 2) return 1;
    if (n == 3) return 2;
    
    int f0 = 0, f1 = 1, fn = 0,sum = 0;

    for (int i = 2; i < n; i++)
    {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
        if (i == (n - 2) || i == (n - 1) )
        {
            sum += fn;
        }
                     
    }
    return sum;
 }