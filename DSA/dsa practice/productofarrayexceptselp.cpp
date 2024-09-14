#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result;
        int product=1;
        bool containzero=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            product=product*nums[i];
            else
            {
                 containzero=true;
                continue;
            }

        }
         for(int i=0;i<nums.size();i++)
        {

          if(nums[i]==0)
        {
            result.push_back(product);
        }
        else{
                if(containzero==true)
                {
                    result.push_back(0);
                }
                else
                {int p=product/nums[i];
            result.push_back(p);
        }
        }

        }
        return result;
    }
int main()
{
    vector<int>p={0,0,0};
    vector<int>r=productExceptSelf(p);
     for(int i=0;i<r.size();i++)
        {
            cout<<r[i];
        }
}
