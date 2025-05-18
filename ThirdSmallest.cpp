#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {4, 7, 5, 2, 1};
    int first = INT_MAX, second = INT_MAX, third = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] < third)
        {
            third = arr[i];
        }
    }
    cout << "Third smallest: " << third << endl;
    return 0;
}