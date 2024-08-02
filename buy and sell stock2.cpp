#include <bits/stdc++.h>
using namespace std;

int maxProfit(int n, vector<int>& prices)
{
    vector<int> currDay(2), nextDay(2);

    // Base Case
    nextDay[0] = nextDay[1] = 0;

    for (int i = n - 1; i >= 0; i--) {
        // Can Buy
        currDay[0]
            = max(nextDay[0], -prices[i] + nextDay[1]);
        // Can Sell
        currDay[1]
            = max(nextDay[1], prices[i] + nextDay[0]);

        nextDay = currDay;
    }
    return nextDay[0];
}

int main()
{
    // Sample Input
    vector<int> prices
        = { 100, 180, 260, 310, 40, 535, 695 };

    int n = prices.size();
    cout << maxProfit(n, prices);

    return 0;
}
