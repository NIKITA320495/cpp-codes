#include<iostream>
#include<vector>
using namespace std;

int removeduplicates(vector<int>& arr) {
    int count=0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n;) {
            if (arr[i] == arr[j]) {
                arr.erase(arr.begin() + j);
                n--;
                count++;// Adjust the size of the vector after erasing an element
            } else {
                j++; // Increment j only if no element is erased
            }
        }
    }
    return count;
}

int main() {
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    int c=removeduplicates(arr);
    cout<<c;
    cout<<endl;
    for(int i=0;i<arr.size();i++)
        cout<<arr[i];
    return 0;
}
