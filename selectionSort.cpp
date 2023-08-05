#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void selectionSort(int arr[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        int imin = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[imin])
            {
                imin = j;
            }
        }
        if (imin != i)
        {
            swap(arr[i], arr[imin]);
        }
    }
}
int main()
{
    int arr[4] = {10, 30, 40, 5};
    cout << "Original Array:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Sorted Array is:\n";

    selectionSort(arr, 4);

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}