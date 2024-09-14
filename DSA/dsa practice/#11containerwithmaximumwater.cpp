#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>& height)
{
    int n=height.size();
    int maxheight=0;
    for(int left=0; left<n/2; left++)
    {
        for(int right=n-1; right>=n/2; right--)
        {
            int length=min(height[left],height[right]);
            int breadth=right-left;
            maxheight=max(length*breadth,maxheight);
        }
    }
     return maxheight;
}
int main()
{
    vector<int>h= {1,8,6,2,5,4,8,3,7};
    int m=maxArea(h);
    cout<<m;
}
