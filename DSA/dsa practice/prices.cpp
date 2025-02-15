#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProfit(vector<int>& prices) {
      if (prices.empty()) // Check if the vector is empty
        return 0;

    int minPrice = prices[0]; // Initialize the minimum price to the first element
    int maxProfit = 0; // Initialize the maximum profit to 0

    for (int i = 1; i < prices.size(); i++) {
        // Update the minimum price seen so far
        minPrice = min(minPrice, prices[i]);
        // Update the maximum profit if selling at the current day would yield a higher profit
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit; // Return the maximum profit
}

int main()
{
    vector<int>c={7,1,5,3,6,4};
    int m=maxProfit(c);
    cout<<m;
}
