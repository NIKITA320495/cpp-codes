#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<unsigned int> missNumsFinder(const vector<unsigned int>& arr) {
    // Find the maximum element in the input array
    const unsigned int maxNumber = *max_element(arr.begin(), arr.end());

    // Create a boolean vector to mark the presence of each number
    vector<bool> present(maxNumber + 1, false);

    // Iterate through the input array and mark the presence of each number
    for (const auto& num : arr) {
        present[num] = true;
    }

    // Create a vector to store missing numbers
    vector<unsigned int> missarr;

    // Iterate from 1 to the maximum number and find missing numbers
    for (unsigned int j = 1; j <= maxNumber; j++) {
        if (!present[j]) {
            missarr.push_back(j);
        }
    }
    return missarr;
}


int main()
{
    vector<unsigned int> a=missNumsFinder({2,4,3,7});
    for(int i=0;i<a.size();i++)
        cout<<a[i];
}
