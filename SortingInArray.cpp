#include <iostream>
using namespace std;

void Selection_sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void Bubble_sort(int arr[], int n)
{

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void Insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main()

{
    cout << "Enter the size of the array : " << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the element of the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Selection_sort(arr, n);
    // Bubble_sort(arr, n);
    // Insertion_sort(arr, n);
    cout << "Print the sorted array :  " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}
