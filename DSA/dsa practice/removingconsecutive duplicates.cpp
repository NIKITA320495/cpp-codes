#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> dup(vector<string> arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        size_t j = 0;
        while (j < arr[i].length() - 1) {
            if (arr[i][j] == arr[i][j + 1]) {
                arr[i].erase(j, 1);
            } else {
                ++j;
            }
        }
    }
    return arr;
}

int main() {
    vector<string> arr = {"apple", "allotte"};
    vector<string> finalarr = dup(arr);

    for (size_t i = 0; i < finalarr.size(); ++i) {
        cout << finalarr[i] << endl;
    }

    return 0;
}
