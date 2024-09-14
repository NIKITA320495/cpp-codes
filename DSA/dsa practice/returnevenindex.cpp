#include<iostream>
#include<vector>
using namespace std;

int find_even_index(vector<int> arr)
{
  int size = arr.size();
  int mid = size / 2;
  int sum1 = 0;
  int sum2 = 0;

  for (int i = 0; i <= mid; i++) {
    sum1 += arr[i];
    sum2 = 0;

    // Skip the middle element in the second sum calculation
    for (int j = size - i - 2; j >= 0; j--) {
      sum2 += arr[j];
    }

    if (sum1 == sum2) {
      return i;
    }
  }

  return -1;
}

int main()
{
      int s = find_even_index( {-1, -2, -3, -4, -3, -2, -1});
    cout << s;
}
