#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>arr)
{ int flag=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==2*arr[j]&&arr[i]!=0&&arr[j]!=0)
                flag=1;
        }
    }
    return (flag==1);
}
int main()
{
    bool ans=check({-2,0,10,-19,4,6,-8});
    cout<<ans;
}
