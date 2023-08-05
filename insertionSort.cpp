#include <iostream>
using namespace std;

void insertionsort(int arr[], int size)
{
    int i, j;
    for (i = 1; i < size; i++)
    {
        int temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[10] = {50, 20, 37, 91, 64, 18, 43, 59, 72, 81};
    cout << "Original Array:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    insertionsort(arr, 10);

    cout << "\nSorted Array:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
    return 0;
}