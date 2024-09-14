#include<iostream>
#include<vector>
using namespace std;
 vector<int> getConcatenation(vector<int>nums) {
     int n=nums.size();
     nums.resize(2*n);
        for(int i=0;i<nums.size();i++)
        {
            nums[n+i]=nums[i];
        }
        return nums;
    }
int main()
{
    vector<int>arr=getConcatenation({1,2,1});
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
}
