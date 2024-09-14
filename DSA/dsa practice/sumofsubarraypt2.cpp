#include<iostream>
#include<vector>
using namespace std;

long elementsSum(const vector<vector<int>>& arr) {
    long sum = 0;

   for (std::vector<std::vector<int>>::size_type i = 0; i < arr.size(); i++) {
        if (!arr[i].empty()) {
            // Calculate the position based on the row index
            std::vector<int>::size_type position = arr.size() - i - 1;

            // Check if the position is within the bounds of the row
            if (position < arr[i].size()) {
                sum += arr[i][position];
            }
        }
    }
    return sum;
}
int main()
{
    long s=elementsSum({{3, 2, 1, 0}, {4, 6, 5, 3, 2}, {9, 8, 7, 4}});
    cout<<s;
}
