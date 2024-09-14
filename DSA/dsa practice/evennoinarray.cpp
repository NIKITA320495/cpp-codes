#include<iostream>
#include<vector>
using namespace std;
vector<int> evennumber(vector<int> arr,int num)
{
    vector<int>even;
    vector<int>evenfinal;
   for(int i=0;i<arr.size();i++)
   {
       if(arr[i]%2==0)
        even.push_back(arr[i]);
   }
   for(int i=even.size()-num;i<even.size();i++)
   {
       evenfinal.push_back(even[i]);
   }
    return evenfinal;
}
int main() {
    vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>evenno=evennumber(myVector, 3);
    for(int i=0;i<evenno.size();i++)
    cout<<evenno[i];

    return 0;
}

