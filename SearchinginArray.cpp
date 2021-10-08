#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int Binary_Search(int arr[], int n, int key)
{

    int s = 0;
    int e = n;

    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
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

    cout << "Enter the search element of the array : " << endl;
    int key;
    cin >> key;
    // cout << LinearSearch(arr, n, key) << endl;
    cout << Binary_Search(arr, n, key) << endl;

    return 0;
}
