// Book Allocation Problem
// there are N books , each ith book has A[i] number of pages.
// you have to allocate books to M number of students so that the maximum number of pages allocated to a student is minimum.
// i.e we have to find minimum possible value for maximum allocated pages to a student
// condition:
// 1. Each book should be allocated to a student.
// 2.Each student has to be allocated at least one book.
// 3.Allotment should be in contiguous order.

// Calculate and return that minimum possible number.
// Return -1 if a valid assignment is not possible.
#include <iostream>
using namespace std;
#include <vector>
bool isValid(vector<int> &arr, int m, int maxAllowedPages) //time complexity O(n)
{
    int n = arr.size();
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedPages)
        {
            return false;
        }
        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
}
int allocateBooks(vector<int> &arr, int m) //time complexity O(nlogN) where N is the max range of pages i.e sum
{
    int n = arr.size();
    if (m > n) // edge case when num of students is greater than books
    {
        return -1;
    }

    // calculating max range of pages
    int sum = 0;
    for (int i = 0; i < n; i++) //time complexity O(n)
    {
        sum += arr[i];
    }

    // finding possible ans using binary search methodology
    int st = 0, end = sum;
    int ans = -1;
    while (st <= end) //time complexity O(logN * n) where N=max range of pages i.e sum
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, m, mid)) // left
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
    vector<int> arr = {1, 2, 5, 3};
    //s1 s2 where s1 and s2 are two students
    //1 10 maxpage=10
    //3 8 maxpage=8
    //8 3 maxpage=8
    //minimum of all maxpage is 8 when book distributing between 2 students
    int numOfStudents = 3;
    int res = allocateBooks(arr, numOfStudents);
    cout << "Minimum possible value for maximum allocated pages between " << numOfStudents << " students is " << res << endl;
  
    return 0;
}