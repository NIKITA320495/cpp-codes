#include<iostream>
#include<vector>
using namespace std;
vector<unsigned int> removeSmallest(vector<unsigned int>arr)
{
    int minindex=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]<arr[minindex])
                minindex=i;
        }
    }
    arr.erase(arr.begin()+minindex);
    return arr;
}
int main()
{
    vector<unsigned int>arr={2,2,1,2,1};
    vector<unsigned int>fin=removeSmallest(arr);
    for(int i=0;i<fin.size();i++)
    {
        cout<<fin[i];
    }
}
