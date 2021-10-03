#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int position)
{
    return (n & (1 << position) != 0);
}

int setBit(int n, int position)
{

    return (n | (1 << position));
}

int clearBit(int n, int position)

{

    int mask = ~(1 << position);
    return (n & mask);
}

int updateBit(int n, int position, int value)
{

    int mask = ~(1 << position);
    n = n & mask;
    return (n | (value << position));
}

void Swap()
{
    int a, b;
    cin >> a >> b;
    cout << "before change :" << a << " " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After change :" << a << " " << b << endl;
}

// find no. of bits to change to convert a to b.
void ChangeBits()
{

    int a, b, n;
    cin >> a >> b;
    n = a ^ b;
    cout << "After using xor operator : " << n << endl;
    int countBits = 0;

    while (n)
    {
        n = n & (n - 1);
        countBits++;
    }
    cout << "Number of change bits :" << countBits << endl;
}

int FindBit(int n, int i)
{
    return (n & (1 << i) != 0);
}

void BinarySubstraction()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;

    ans = a + (~b + 1);
    cout << "Binary Substract is :" << ans << endl;
}

// find unrepeated one unique element in the array

void findUnrepeated()
{
    int n;
    cin >> n;
    int a[n] = {5, 2, 4, 6, 5, 4, 6};
    int ans = a[0];
    int i;
    for (i = 0; i < n; i++)
    {
        ans = ans ^ a[i];
        if (a[i] == ans)
        {
            cout << "Index :" << i << endl;
        }
    }
    cout << "Unrepeated elemnet is : " << ans << endl;
}



// finding that given number is power of two or not
bool IsPowerofTwo(int n)
{
    return (n && !(n & n - 1));
}
// find number of ones in a binary number

int Nuberofones(int n)
{

    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }

    return count;
}

// finding the subset of given number by uaing bits.

void subsets(char a[], int n)
{
    // 1<<n for total number of subsets which is 2*n . or i & 1<<j for getting set bit
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << a[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    // Bit Manipulation is the most imporatant thing for the coding .
    // cout<<getBit(1001101,4)<<endl;
    // cout << setBit(5, 1);
    // cout<<clearBit(5,2);

    // cout << updateBit(5, 1, 1);
    // ChangeBits();
    // Swap();
    // BinarySubstraction();
    // cout << FindBit(10001101, 4);
    // findUnrepeated();
    // cout<<IsPowerofTwo(32)<<endl;
    // cout << Nuberofones(19);
    // char arr[4] = {'a', 'b', 'c', 'd'};
    // subsets(arr, 4);


    return 0;
}
