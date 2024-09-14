#include<iostream>
#include<string>
#include<vector>
using namespace std;
string reverseword(string s)
{
     string word;
    vector<string> arr;
    vector<string>arr2;
    int start = 0;
    while (s[start] == ' ') {
        start++;
    }

    // Trim trailing spaces
    int end = s.length() - 1;
    while (end >= 0 && s[end] == ' ') {
        end--;
    }

    // Update the string to contain only the trimmed portion
    s = s.substr(start, end - start + 1);


    for (int i = 0; i <= s.length(); ++i) {
        if (s[i] != ' ' && s[i] != '\0') {
            word += s[i];
        } else if(!word.empty()) {
            arr.push_back(word);
            word.clear();
        }
    }
    for(int i=arr.size()-1;i>=0;i--)
    {
      arr2.push_back(arr[i]);
      if (i > 0){
            arr2.push_back(" ");
        }
    }
string ans;
for(int i=0;i<arr2.size();i++)
{
    ans+=arr2[i];
}
return ans;
}
int main()
{
    string s="a good  example";
    string ans=reverseword(s);
    cout<<ans;
}
