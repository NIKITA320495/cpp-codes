#include <iostream>
using namespace std;

int main() {
    char ch1[] = "hello world. hello this language is difficult.";
    char ch2[] = "hello";
    int count = 0;
    int i, j;

    for (i = 0; ch1[i] != '\0'; i++) {
        if (ch1[i] == ch2[0]) {
            bool found = true;

            for (j = 0; ch2[j] != '\0'; j++) {
                if (ch2[j] != ch1[i + j]) {
                    count++;
                }
            }


                i += j - 1; // Move 'i' to the end of the matched word

        }
    }

    cout << count;
    return 0;
}
