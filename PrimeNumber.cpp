#include <iostream>
using namespace std;

//  PRINT PRIME NUMBERS BETWEEN THE RANGE OF A AND B .

int main()
{
    //     int a, b;
    //     cout << "Enter the Range : ";
    //     cin >> a >> b;
    //     for (int num = a; num <= b; num++)
    //     {
    //         int i;
    //         for (i = 2; i < num; i++)
    //         {
    //             if (num % i == 0)
    //             {
    //                 // cout << "Non Prime Number ." << endl;
    //                 break;
    //             }
    //         }
    //         if (i == num)
    //         {
    //             cout << num << endl;
    //             cout << "Prime Number." << endl;
    //         }
    //     }

    //  for checking the prime or not of any number.
    int n;
    cout << "enter the numbder : ";
    cin >> n;
    int i;
    for (i = 2; i*i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a Prime Number ." << endl;
            break;
        }

        if (i == n)
        {
            cout << "A Prime Number ." << endl;
        }
        return 0;
    }
