// in this container with most water problem we have to find the max container which store the most water surrounded with left and right boundary of the container
// you are given an array height of length n. there are n vertical lins drawn such that the two endpoints of the ith line are (i,0) and (i,height[i]).
// find two lines that together with the x-axis form a container , such that the container contains the most water .
// Return a maximum amound of water a container can store.
// notice that you may not slant the container
#include <vector>
#include <iostream>
#include <limits.h>
using namespace std;
// bruite force approach its work in O(n*n) time complexity
// int maxArea(vector<int> height)
// {
//     int maxarea = INT_MIN;
//     int w, h;
//     int x, y;
//     for (int i = 0; i < height.size(); i++)
//     {
//         for (int j = i + 1; j < height.size(); j++)
//         {
//             h = min(height[i], height[j]);
//             w = j - i;

//             if (w * h > maxarea)
//             {
//                 maxarea = w * h;
//                 x = i;
//                 y = j;
//             }
//         }
//     }
//     cout << "Line with height " << height[x] << " at index " << x << " and " << height[y] << " at index " << y << " contain most water." << endl;
//     return maxarea;
// }
// two pointer approach most optimized its work in O(n) time complexity
int maxArea(vector<int> height)
{
    int maxarea = INT_MIN;
    int w, h;
    int x, y;
    int lp = 0, rp = height.size() - 1;
    while (lp < rp)
    {
        h = min(height[lp], height[rp]);
        w = rp - lp;
        if (w * h > maxarea)
        {
            maxarea = w * h;
            x = lp;
            y = rp;
        }
        height[lp] < height[rp] ? lp++ : rp--;
    }

    cout << "Line with height " << height[x] << " at index " << x << " and " << height[y] << " at index " << y << " contain most water." << endl;
    return maxarea;
}

int main()
{
    // height of rectangular container is min(a,b) where a and b is the height of the line
    // width of the continer is found by defference between both height index i.e height of b - height of a
    // vector<int> height = {3, 2, 4, 7, 2, 2, 2};
    // vector<int> height = {2, 2, 2, 1, 1, 1, 2, 2, 2};
    // vector<int> height = {1,2,3,10,9,8,7,8,9,10,3,2,1};
    vector<int> height = {0,3,5,7,9};

    cout << "Container with most water found Area is: " << maxArea(height) << endl;
    return 0;
}