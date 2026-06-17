//Best BUYING & SELLING (Greedy, Running Minimum, Running Maximum)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); i++) {

        if (minPrice > prices[i]) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}

int main() {

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit = "
         << maxProfit(prices) << endl;

    return 0;
}
