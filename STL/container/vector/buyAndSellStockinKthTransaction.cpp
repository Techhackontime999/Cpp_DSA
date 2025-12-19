#include <iostream>
using namespace std;
#include <vector>
#include <queue>
#include<limits.h>
#include<algorithm>
// best time to buy and sell stock
// problem: return max profit which you can do
// you are given an array of prices where prices[i] is the price of a given stock on the i-th day.
// you want to maximize your profit by choosing a single day to buy a stock and choosing a different day in the future to sell that stock.
// return the maximum profit you acheive from these transactions.if you can not achieve any profit then return 0;
int maxProfit(int k, vector<int> prices)
{
    // today is the selling day and i finding the all posible combination for buying and selling
    int maxprofit = 0;
    vector<int> profit;
    int maxj=INT_MIN;
    for (int i = 0; i < prices.size(); i++)
    {
        for (int j = i + 1; j < prices.size(); j++)
        {
            if (prices[j] > prices[i])
            {
                maxj = max(maxj, prices[j]);
            }
        }
        profit.push_back(maxj - prices[i]);
    }
    for (int i = 0; i < profit.size(); i++)
    {
       cout<<profit[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int main()
{
    // vector<int> prices = {5, 3, 1, 6,10,11,12, 2, 5,7,8,0,9};
    // vector<int> prices = {5,4,3,2,1};
    // vector<int> prices = {1,1};
    // vector<int> prices = {2, 1, 2, 0, 1, 2, 0, 1, 2};
    vector<int> prices = {5, 3, 1, 6, 10, 11, 2, 5, 0, 9};
    int noOfTransaction = 3;
    int result = maxProfit(noOfTransaction, prices);
    cout << "Maximum profit you can achieve from " << noOfTransaction << " transaction is: " << result << endl;

    return 0;
}