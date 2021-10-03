#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int position)
{

    return ((n & (1 << position)) != 0);
}

int setBit(int n, int position)
{

    return (n | (1 << position));
}
// Case: 2 Two element are not repeated in the array, find these non-repeating element.

void UniqueTwoNumber(int a[], int n)
{

    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ a[i];
    }
    int tempxor = xorsum;
    int position = 0; // for finding rightmost set bit to seperate two unique numbers.
    int setbit = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        position++;           /// if at pos = 0 not find setbit then increase position
        xorsum = xorsum >> 1; /// this gives only zero bit.
    }
    int newxor = 0; // for finding first unique number
    for (int i = 0; i < n; i++)
    {
        if (getBit(a[i], position - 1))
        {
            newxor = newxor ^ a[i];
            cout << "Index: " << i << "Element : " << newxor << endl;
        }
    }

    // cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
}

//  Case:3 find unique number from all the numbers are repeated thrice except unique numbers .

int Uniquethreenumbers(int a[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(a[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }

    return result;
}

int main()
{
    //     int a[] = {1, 2, 3, 1, 2, 3, 8, 4};
    //     UniqueTwoNumber(a, 8);

    int a[] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 5};
     cout << Uniquethreenumbers(a, 10);

                  return 0;
}