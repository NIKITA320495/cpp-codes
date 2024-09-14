#include<iostream>
#include<vector>
using namespace std;
bool isValidSudoku(vector<vector<char>>& arr)
{
    bool ans=true;
    char element;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            element=arr[i][j];
            for(int k=0; k<9; k++)
            {
                if(element==arr[i][k]||element==arr[k][i])
                {
                    ans=false;
                }
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<char>> arr = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    bool a=isValidSudoku(arr);
    cout<<a;
}
