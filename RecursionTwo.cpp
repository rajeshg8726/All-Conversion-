#include <bits/stdc++.h>
using namespace std;

// check if all the element of the array is sorted or not by using recursion.

bool checkSorted(int a[], int n)
{
    if (n == 1)
    {
        return true;
    }

    bool restArray = checkSorted(a + 1, n - 1);
    return (a[0] < a[1] && restArray);
}
//  Print array in increasing and decresing order.

void decresing(int n)
{
    if (n == 1)
    {

        cout << "1" << endl;
        return;
    }
    cout << n << " ";
    decresing(n - 1);
}

void Incresing(int n)
{

    if (n == 1)
    {
        cout << "1"
             << " ";
        return;
    }

    Incresing(n - 1);
    cout << n << " ";
}

// find first and last occurence of the element in the array

int Firstoccurence(int a[], int n, int i, int key)
{

    // i hold for the position of the occurence of the element .
    // key is the occurence element

    if (i == n)
    {

        return -1; /// NO occurence is available
    }
    if (a[i] == key)
    {

        return i;
    }

    return Firstoccurence(a, n, i + 1, key);
}

int lastOcrrurence(int a[], int n, int i, int key)
{

    if (i == n)
    {

        return -1; /// NO occurence is available
    }

    int restArray = lastOcrrurence(a, n, i + 1, key);
    if (restArray != -1)
    {
        return restArray;
    }
    if (a[i] == key)
    {
        return i;
    }

    return -1;
}

int main()
{

#ifndef ONLINE_JUDDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cout << "I am Rajesh Gupta, How are you ?" << endl;
    cout << "I'm Good, thanks and you ?" << endl;
    //     int a[] = {1,2,3,4,8,6,7};
    // cout<<checkSorted(a , 6)<<endl;
    // cout << "Decresing Order : " << endl;

    // decresing(10);
    // cout << "Incresing Order : " << endl;

    // Incresing(10);

    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << Firstoccurence(arr, 7, 0, 2)<<endl;
    cout<< lastOcrrurence(arr , 7 , 0 , 2)<<endl;
    return 0;
}
