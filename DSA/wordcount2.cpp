#include<iostream>
using namespace std;

int main() {
    char arr[100];

    // Input using the getline function.
    cin.getline(arr, 100);
    char separator = ' ';
    int i = 0;

    // Temporary string used to split the string.
    string s;
    while (arr[i] != '\0') {
        if (arr[i] != separator) {
            // Append the char to the temp string.
            s += arr[i];
        } else {
            cout << s << endl;
            s.clear();
        }
        i++;

    }

    // Output the last stored word.
    cout << s[0] << endl;
}
