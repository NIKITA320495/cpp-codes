#include<iostream>
#include<vector>
using namespace std;
 int minOperations(vector<int>arr) {
        int n=arr.size();
        int c=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<=arr[i-1])
            {
                c+=(arr[i-1]-arr[i]+1);
                arr[i] = arr[i - 1] + 1;
            }
        }
        return c;
    }
int main()
{
    int c=minOperations({1,5,2,4,1});
    cout<<c;
}
