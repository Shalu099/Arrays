#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {5, 6, 3, 4, 3};
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            second = arr[i];
        }
    }
    cout << "Second Largest:" << second << endl;
    return 0;
}