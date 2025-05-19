#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int key = 4;
    int index = -1;
    int arr[5] = {6, 5, 7, 8, 4};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }
    cout << index;

    return 0;
}