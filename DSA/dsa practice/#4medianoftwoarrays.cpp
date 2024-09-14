#include<iostream>
#include<vector>
using namespace std;
double  findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
    vector<int> merged(nums1.size() + nums2.size());
    int i=0;
    int j=0;
    int k=0;
    while(i<nums1.size()&&j<nums2.size())
    {
        if(nums1[i]<=nums2[j])
        {
            merged[k]=nums1[i];
            i++;
            k++;
        }
        else
        {
            merged[k]=nums2[j];
            j++;
            k++;
        }
    }
    while(i<nums1.size())
    {
        merged[k]=nums1[i];
        k++;
        i++;
    }
    while(j<nums2.size())
    {
        merged[k]=nums2[j];
        k++;
        j++;
    }
    int n=merged.size();
    if(n%2!=0)
    {
        return merged[n/2];
    }
    else
    {
        int s=merged[n/2]+merged[(n/2)-1];
        return (s/2.0);
    }
}
int main()
{
vector<int>n1={1,3};
vector<int>n2={2};
double ans=findMedianSortedArrays(n1,n2);
cout<<ans;

}
