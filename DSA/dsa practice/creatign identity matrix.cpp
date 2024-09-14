#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> identity(int size)
{
    vector<vector<int>>arr;
    int numRows=size;
    int numCols=size;
    arr.resize(numRows, vector<int>(numCols, 0));
    for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                arr[i][j]=0;
                if(i==j)
                {
                    arr[i][j]=1;
                }
            }
        }
return arr;
}
int main()
{
    vector<vector<int>>id=identity(5);
    for(int i=0;i<id.size();i++)
    {
        for(int j=0;j<id.size();j++)
        {
               cout<<id[i][j]<<" ";
        }
        cout<<endl;
    }

}
