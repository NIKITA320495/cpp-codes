#include<iostream>
#include<vector>
using namespace std;
bool issmallenough(vector<int>arr,int num)
{
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]<num)
        {
            count++;
        }
    }
    if(count==arr.size())
        return true;
    else
        return false;
}
int main()
{
    bool ans=issmallenough({100,45},150);
    cout<<ans;
}
