#include<iostream>
#include<vector>
using namespace std;
vector<int>twosum(vector<int>nums,int target)
{
    vector<int>ans;
     for(int i=0;i<nums.size();i++)
    {
       for(int j=0;j<nums.size();j++)
       {
           if(nums[i]+nums[i+j]==target)
           {
               ans.push_back(i);
               ans.push_back(i+j);
           }
       }
    }
    return ans;

}
int main()
{
     vector<int>s=twosum({1,2,3,4,5},9);
     for(int i=0;i<s.size();i++)
     {
         cout<<s[i];
     }

}





