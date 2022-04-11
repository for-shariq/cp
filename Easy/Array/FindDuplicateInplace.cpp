#include<iostream>
#include<vector>
using namespace std;


int removeDuplicates(vector<int>& nums);

int main()
{
    vector<int> v  {1,1,1,2} ;// {0,0,1,1,1,2,2,3,3,4};
    //vector<int> v   {0,0,1,1,1,2,2,3,3,4};
    //vector<int> v   {1,1,2};


    int n = removeDuplicates(v);
    cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }   
    
}

int removeDuplicates(vector<int>& nums)
{
    if(nums.size() == 0) return 0;
    int i = 0;
    for(int j = 1; j < nums.size(); j++)
    {
        if(nums[i] !=  nums[j])
        {
            nums[++i] = nums[j];
        }
    }
    return i+1;
}

// int removeDuplicates(vector<int>& nums) {
//     int removed = nums.size();
//     for (int i = 0; i < removed; i++)
//     {
//         for(int j = i + 1 ; j < removed; j++ )
//         {
//             if(nums[i] == nums[j])
//             {
//                 removed--;
//                 for (int k = j; k < removed ; k++)
//                 {
//                     nums[k] = nums[k + 1];
//                 }  
//                if(i > 0)
//                {
//                     i--; 
//                }                 
//                else 
//                {
//                     i = 0;            
//                     j=i;
//                }               
                    
//             }
//         }
//     }
     
//     return removed;
// }