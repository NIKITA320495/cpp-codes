#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    result.push_back(temp);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                while (j < k && nums[k] == nums[k + 1]) k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                        j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return result;
    }
int main()
{
    vector<int>n={-1,0,1,2,-1,-4};
    vector<vector<int>>ans=threeSum(n);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
