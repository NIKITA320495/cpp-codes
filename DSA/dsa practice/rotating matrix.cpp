#include<iostream>
#include<vector>
using namespace std;

/* vector<vector<int>> rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> arr(n, vector<int>(n, 0)); // Initialize a new matrix of size n x n with all elements 0

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = matrix[n - j - 1][i]; // Perform rotation
        }
    }
    return arr;
}*/
#include<iostream>
#include<vector>
using namespace std;

void rotatematrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<vector<int>> m(n, vector<int>(n)); // Define a matrix of size n x n

    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    rotatematrix(m);

    cout << "Rotated matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
