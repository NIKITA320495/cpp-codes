#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> nums1, int m, vector<int> nums2, int n) {
    int i = 0;
    int j = 0;
    int c = 0;

    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            i++;
        } else {
            for (int k = nums1.size() - 1; k > i; --k) {
                nums1[k] = nums1[k - 1];
            }
            nums1[i] = nums2[j];
            j++;
        }
        c++;
    }

    while (j < n) {
        nums1[c++] = nums2[j++];
    }

    return nums1;
}

int main() {
    vector<int> a = {1, 2, 3, 0, 0, 0};
    vector<int> b = {2, 5, 6};
    vector<int> c = merge(a, 3, b, 3);

    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }

    return 0;
}
