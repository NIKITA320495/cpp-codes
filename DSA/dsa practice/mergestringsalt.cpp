#include <iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3;
        int n1 = word1.length();
        int n2 = word2.length();
        int n3 = n1 + n2;
        word3.resize(n3);

        int i = 0, j = 0;
        for (int k = 0; k < n3; k++) {
            if (k % 2 == 0 && i < n1) {
                word3[k] = word1[i++];
            } else if (j < n2) {
                word3[k] = word2[j++];
            }
        }

        // Append the remaining characters from word1
        while (i < n1) {
            word3 += word1[i++];
        }

        // Append the remaining characters from word2
        while (j < n2) {
            word3 += word2[j++];
        }

        return word3;
    }
};

int main()
{
    Solution s;
   string w=s.mergeAlternately("abcd","pq");
   for(int i=0;i<w.length();i++)
   {
       cout<<w[i];
   }

}

