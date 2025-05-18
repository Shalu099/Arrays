#include <iostream>
using namespace std;
int main()
{
    int n = 9;
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float avg = sum / 9.0;
    cout << "Average = " << avg << " ";
    return 0;
}