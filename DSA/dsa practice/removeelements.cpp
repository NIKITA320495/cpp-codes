#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int removeElement(vector<int>&nums, int val)
{
    int c=count(nums.begin(), nums.end(), val);
    nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
    return c;
}
int main()
{
    vector<int> arr={0,1,2,2,3,0,4,2};
    int v=removeElement(arr,2);
    cout<<v;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }

}
