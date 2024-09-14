#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int majorityElement(vector<int> nums)
 {
     int ans;
     for (int i=0;i<nums.size();i++)
     {
         int occ=count(nums.begin(),nums.end(),nums[i]);
         if(occ>floor(nums.size()/2))
         {
             ans=nums[i];
         }
     }
     return ans;
 }
 int main()
 {
     vector<int>nums={2,2,1,1,1,2,2};
     int c=majorityElement(nums);
     cout<<c;
 }
