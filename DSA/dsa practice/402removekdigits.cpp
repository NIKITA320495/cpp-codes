#include<iostream>
#include<string>
#include<stack>
using namespace std;
string removeKdigits(string num, int k) {
        stack<char>s;
        string result;
        for(char digit:num)
        {
            while(!s.empty()&&k>0 && s.top()>digit)
            {
                    s.pop();
                    k--;
            }
                    s.push(digit);
                }

         while(!s.empty()&&k>0)
         {
             s.pop();
             k--;
         }
         while (!s.empty()) {
        result = s.top() + result;
        s.pop();
    }

    // Remove leading zeros
    size_t pos = result.find_first_not_of('0');
    if (pos != string::npos) {
        result = result.substr(pos);
    } else {
        result = "0"; // If result only contains zeros
    }

    return result;
    }
int main()
{
    string num="1432219";
    string ans=removeKdigits(num,3);
    cout<<ans;
}
