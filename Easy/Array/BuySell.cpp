#include<iostream>
#include<vector>
using namespace std;


int maxProfit(vector<int>& prices);

int main()
{
    vector<int> v  {7,1,5,3,6,4} ;
    //vector<int> v   {1,2,3,4,5};
    //vector<int> v   {1,1,2};


    int n = maxProfit(v);
    cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }   
    
}
int maxProfit(vector<int>& prices)
{
    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
      if (prices[i] > prices[i - 1])
      {
          profit += prices[i] - prices[i - 1];
      }
      
    }
    return profit;
}