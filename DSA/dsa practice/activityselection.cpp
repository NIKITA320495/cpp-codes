#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int start_time,end_time;
    cout<<"Enter the number of activities you want to enter";
    cin>>n;
    vector<int>ans;
    vector<vector<int>> A(n, vector<int>(2));
    for(int i=0;i<n;i++)
    {
            cin>>start_time;
            cin>>end_time;
            A[i][0]=start_time;
            A[i][1]=end_time;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        { cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    int end_t=A[0][1];
    ans.push_back(1);
    for(int i=1;i<n;i++)
    {
           if(A[i][0]>=end_t)
            {
                end_t=A[i][1];
                ans.push_back(i+1);

            }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
