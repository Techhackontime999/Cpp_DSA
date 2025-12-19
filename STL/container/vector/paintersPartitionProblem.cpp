// Painter's Partition Problem

// There are N boards of length of each given in the form of array. and M painters ,such that each painters takes 1 unit of time to paint 1 unit of the board.

// The task is to find the minimum time to paint all boards under the constraints that any painters will only paint contiguous sections of boards.

// exe: two painters p1 and p2 paint four board which length is 40,10,30,20

// p1 p2 work complition time
// 40 60 maxtime=60
// 50 50 maxtime=50
// 80 20 maxtime=80

// minimum time in these all maxtime is 50 when we use two painters

// i.e in this problem we have to find minimum possible time for maximimum time for partitioning painters to complete his work.

#include <iostream>
using namespace std;
#include <vector>
bool isPossible(vector<int> &A, int m, int maxAllowedTime)
{
    int n = A.size() - 1;
    int time = 0;
    int painters = 1;
    for (int i = 0; i <= n; i++)
    {
        if (A[i] > maxAllowedTime)
        {
            return false;
        }
        if (time + A[i] <= maxAllowedTime)
        {
            time += A[i];
        }
        else
        {
            painters++;
            time = A[i];
        }
    }

    return painters > m ? false : true;
}
int partitionedPainters(vector<int> &A, int m)
{
    int n = A.size() - 1;
    if (m > n)
    {
        return -1;
    }
    // finding min range of time for painters partion
    int min = __INT_MAX__;
    // finding max range of time for painters partion
    int max = 0;
    for (int i = 0; i <= n; i++)
    {
        if (min > A[i])
        {
            min = A[i];
        }
        max += A[i];
    }
    // finding possible minimum time for work complition
    int ans = -1;
    int st = min, end = max;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(A, m, mid)) // left
        {
            ans = mid;
            end = mid - 1;
        }
        else
        { // right
            st = mid + 1;
        }
    }

    return ans;
}
int main()
{
    // vector<int> A = {1, 2, 5, 3};
    vector<int> A = {40, 10, 30, 20};

    int numOfPainter = 2;
    int res = partitionedPainters(A, numOfPainter);
    cout << "Minimum possible time of maximum time for partitioning painters to complete his work using " << numOfPainter << " painters is " << res << " unit time." << endl;

    return 0;
}
