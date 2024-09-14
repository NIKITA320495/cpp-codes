#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int length(string s)
{vector<int> arr;
    int max_count = 0; // Initialize max_count to keep track of the maximum consecutive count
    for (int i = 97; i <= 122; i++) {
        arr.push_back(i);
    }
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            if (s[i] == arr[j]) {
                int count = 1; // Initialize count within the if condition
                for (int k = i + 1, l = j + 1; k < s.length() && l < arr.size(); k++, l++) {
                    if (s[k] == static_cast<char>(arr[l])) {
                        count++;
                    } else {
                        break; // Exit the loop if consecutive ASCII values don't match
                    }
                }
                if (count > max_count) {
                    max_count = count; // Update max_count if a longer consecutive sequence is found
                }
            }
        }
    }
    return max_count;
}
int main()
{
    string s="abcdabb";
    int ans=length(s);
    cout<<ans;
}
