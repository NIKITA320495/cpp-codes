#include<iostream>
#include<vector>
using namespace std;
 vector<int> sortArray(vector<int>arr)
{
    for(int i=0;i<arr.size();i++)
    {
        int minindex=i;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]%2!=0&&arr[j]%2!=0&&arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    return arr;
}
int main()
{
    vector<int>arr={2,3,4,1,5,9,7};
    vector<int>sorted=sortArray(arr);
    for(int i=0;i<sorted.size();i++)
    {
        cout<<sorted[i];
    }
}
