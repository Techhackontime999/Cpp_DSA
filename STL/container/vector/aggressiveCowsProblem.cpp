// Aggressive cows problem
// Assign C cows to N stalls such that min distance betweeen them is largest possible.
// Return largest minimum distance
// i.e we have to find largest possible minimum distance when N stalls assigning to C cows
// we have to take distance as largest as possible for assigning C cows by which aggressive cows not fight or aggressive to each other.
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
bool isPossible(vector<int> &arr, int c, int minAllowedDistance)//time complexity O(n)
{
    int n = arr.size();
    int cows = 1, lastStallPos = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lastStallPos >= minAllowedDistance)
        {
            cows++;
            lastStallPos = arr[i];
        }
        if (cows == c)
        {
            return true;
        }
    }
    return false;
}
int getDistance(vector<int> &arr, int c) // time complexity of this depends on n and Range which is greater O(nlog(which is greater))
{
    int n = arr.size();           // no of stall(
    sort(arr.begin(), arr.end()); // time complexity O(nlogn)
    int st = 1, end = arr[n - 1] - arr[0];
    int ans = -1;
    while (st <= end) // time complexity O(nlogRange) where range is the maximum distance between two stall
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, c, mid)) // right //time complexity O(n)
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    // vector<int> arr = {3, 5, 6, 2, 7}; // stalls position at distance arr[i] , arr size = noOfStalls available
    vector<int> arr = {1, 2, 8, 4, 9};
    int noOfCows = 3;
    int res = getDistance(arr, noOfCows);
    cout << "largest possible minimum distance " << "assigning to " << noOfCows << " cows in order by which they not aggressive is: " << res << endl;
    return 0;
}
