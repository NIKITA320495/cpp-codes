#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string> strs) {
    if (strs.empty()) {
        return "";  // Handle the case when the vector is empty
    }
    sort(strs.begin(), strs.end());
    string commonPrefix;
    for (int j = 0; j < strs[0].length(); ++j) {
        char currentChar = strs[0][j];
        bool isCommon = true;
        for (int i = 1; i < strs.size(); ++i) {
            if (j >= strs[i].length() || strs[i][j] != currentChar) {
                isCommon = false;
                break;
            }
        }

        if (isCommon) {
            commonPrefix += currentChar;
        } else {
            break;  // Break the loop if the character is not common
        }
    }

    return commonPrefix;
}

int main() {
    string commonPrefix = longestCommonPrefix({"flower", "flaws", "fly"});
    cout << "Longest Common Prefix: " << commonPrefix << endl;
    return 0;
}
