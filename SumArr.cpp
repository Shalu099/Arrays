#include <iostream>
using namespace std;
int main()
{
    int n = 20;
    int arr[20] = {1, 2, 3, 2, 6, 8, 7, 5, 4, 3, 2, 3, 4, 6, 7, 8, 9, 7, 6, 5};
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum << " ";
    return 0;
}