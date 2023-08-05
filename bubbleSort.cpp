#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    int i, r;
    for (r = 0; r < size - 1; r++)
    {
        for (i = 0; i <= size - 1 - r; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[5] = {25, 37, 11, 42, 19};
    cout << "Original Array:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, 5);

    cout << "Sort Array:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}