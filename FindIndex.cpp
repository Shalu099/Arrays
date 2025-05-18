#include <iostream>
using namespace std;
int main()
{
    int n = 5, target = 6;
    int index = -1;
    int arr[5] = {4, 3, 2, 6, 0};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }
    cout << "Index: " << index << endl;
    return 0;
}