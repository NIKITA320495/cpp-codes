#include<iostream>
#include<vector>
using namespace std;
int buyChoco(vector<int>arr, int money) {
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                if(money-arr[i]-arr[j]==0)
                    return 0;
                break;
            }
        }
        return money;
    }
int main()
{
    int r=buyChoco({98,54,6,34,66,63,52,39},62);
    cout<<r;
}
