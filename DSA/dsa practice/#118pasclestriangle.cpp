#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> getRow(int k) {
    vector<vector<int>> rows(k + 1, vector<int>(k + 1, 0)); // Initialize rows with size k+1
   rows[0][0]=1;
    for(int i=1;i<=k;i++)
    {
         rows[i][0]=1;
        for(int j=1;j<=i;j++)
        {
            rows[i][j]=rows[i-1][j]+rows[i-1][j-1];
        }
    }
    return rows;
}
int main()
{
    vector<vector<int>>ans=getRow(3);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
    }
}
