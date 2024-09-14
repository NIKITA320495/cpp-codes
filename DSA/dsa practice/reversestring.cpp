#include <string>
#include <iostream>
using namespace std;

string reverseString(string str)
{
    int count = 0;
    string rev;

    // Find the length of the string
    for (int i = 0; str[i] != '\0'; i++)
        count++;

    // Resize the 'rev' string to the length of the original string
    rev.resize(count);

    // Reverse the string
    for (int i = count - 1, j = 0; i >= 0; i--, j++)
        rev[j] = str[i];

    return rev;
}

int main()
{
    string rev = reverseString("hello");
    cout << rev;

    return 0;
}
