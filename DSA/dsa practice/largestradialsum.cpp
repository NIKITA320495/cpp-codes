#include <vector>
#include <iostream>
#include <climits>
using namespace std;

int largestRadialSum(vector<int> arr, int d) {
    int maxsum = INT_MIN;
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        int currsum = 0;
        for (int j = 0; j < d; ++j) {
            currsum += arr[(i + (n/d)*j) % n];
        }
        maxsum = max(maxsum, currsum);
    }

    return maxsum;
}

int main() {
    int s = largestRadialSum({1, 2, 3, 4}, 2);
    cout << s;
    return 0;
}
