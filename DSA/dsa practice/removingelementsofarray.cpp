#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> removearr(vector<int>arr1,vector<int>arr2)
{
    int n1=arr1.size();
    int n2=arr2.size();
     for (int i = 0; i < arr2.size(); ++i) {
        arr1.erase(remove(arr1.begin(), arr1.end(), arr2[i]), arr1.end());
    }

    return arr1;
}
int main()
{
    vector<int>a=removearr({1, 1, 2 ,3 ,1 ,2 ,3 ,4},{1,3});
    for (int i=0;i<a.size();i++)
    {
        cout<<a[i];
    }
}
