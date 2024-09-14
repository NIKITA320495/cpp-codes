#include<iostream>
#include<vector>
using namespace std;
 void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

         vector<bool> zeroRows(rows, false);
        vector<bool> zeroCols(cols, false);

        for (int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(matrix[i][j]==0)
                {
                   zeroRows[i]=true;
                   zeroCols[j]=true;
                }
            }
        }
        for (int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(zeroRows[i]==true)
                {
                   matrix[i][j]=0;
                }
            }
        }
for (int j=0;j<cols;j++)
        {
            for(int i=0;i<rows;i++)
            {
                if(zeroCols[j]==true)
                {
                   matrix[i][j]=0;
                }
            }
        }

    }
int main()
{
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> m(rows, vector<int>(cols));

    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> m[i][j];
        }
    }

    setZeroes(m);

    cout << "Matrix after setting zeroes: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
