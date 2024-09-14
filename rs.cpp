#include<iostream>
using namespace std;

int main() {
    char str1[6] = "hello";
    char vow[6] = "aeiou";
    char str2[6];
    int k = 0;

    // Copy vowels from str1 to str2 in reverse order
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (str1[i] == vow[j]) {
                str2[k] = str1[i];
                k++;
            }
        }
    }

    // Reverse the order of vowels in str1
    k--; // Adjust k to point to the last vowel in str2
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            if (str1[i] == vow[j]) {
                str1[i] = str2[k];
                k--;
            }
        }
    }

    // Output the result
    for (int i = 0; i < 6; i++) {
        cout << str1[i];
    }

    return 0;
}
