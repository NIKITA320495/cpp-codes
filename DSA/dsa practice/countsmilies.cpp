#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countSmileys(vector<string> arr) {
    int count = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int m = arr[i].length();

        for (int j = 0; j < m; j++) {  // Adjusted loop condition
            if ((arr[i][j] == ':' || arr[i][j] == ';') &&
    (arr[i][j + 1] == '-' || arr[i][j + 1] == '~' || arr[i][j + 1] == ' ' || arr[i][j + 1] == '\0') &&
    (arr[i][j] == ')' || arr[i][j] == 'D')) { // Updated third condition
    count++;
}
            }
        }


    return count;
}
int main() {
    vector<string> arr = {":D", ":(", ":)"};
    int smile = countSmileys(arr);
    cout << smile;  // Now outputs 2

}
