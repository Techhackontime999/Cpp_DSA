#include <iostream>
using namespace std;
#include <vector>
// best time to buy and sell stock
// problem: return max profit which you can do
// you are given an array of prices where prices[i] is the price of a given stock on the i-th day.
// you want to maximize your profit by choosing a single day to buy a stock and choosing a different day in the future to sell that stock.
// return the maximum profit you acheive from these transactions.if you can not achieve any profit then return 0;
int maxProfit(vector<int> prices)
{
    int bestBuy = prices[0], maxprofit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        // today is a selling day
        if (prices[i] > bestBuy)
        {
            maxprofit = max(maxprofit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxprofit;
}
int main()
{
    vector<int> prices = {5, 3, 1, 6, 10, 11, 12, 2, 5, 7, 8, 0, 9};
    // vector<int> prices = {5,4,3,2,1};
    // vector<int> prices = {1,1};
    // vector<int> prices = {2, 1, 2,0, 1, 2, 0, 1, 2};

    int result = maxProfit(prices);
    cout << "Maximum profit you can achieve from a single transaction is: " << result << endl;

    return 0;
}