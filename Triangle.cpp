#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Pythagorian_Triplet(int x, int y, int z)
{

    int a, b, c;

    a = x;
    a = max(a, max(y, z));
    if (y > z)
    {

        b = y;
    }
    else
    {
        c = z;
    }

    int tmep = pow(a, 2);

    if (tmep = b * b + c * c)
    {
        cout << "It is triplet." << endl;
    }

    else
    {
        cout << "Not a triplet." << endl;
    }
}

int main()
{

    int A, B, C;

    cin >> A >> B >> C;
    // cout << "Show the sides of Triangle : " << A << " " << B << " " << C << endl;
    // if (A == B && B == C)
    // {

    //     cout << " This is Equilateral Triangle ." << endl;
    // }
    // else if (A == B || B == C || A == C)
    // {
    //     /* code */
    //     cout << " This is Isocelus Triangle ." << endl;
    // }

    // else
    // {
    //     cout << " This is Scelen Triangle ." << endl;
    // }
    Pythagorian_Triplet(A, B, C);
    return 0;
}