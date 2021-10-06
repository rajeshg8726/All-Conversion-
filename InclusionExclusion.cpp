#include <bits/stdc++.h>
using namespace std;

int Divisible(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);

    return (c1 + c2 - c3);
}

// finding greatest common divisor
// concept : if we substract or take remainder of two number then gcd will not be change of these number
// this is by eulid algorithms

int GCD(int a, int b)
{

    while (b != 0)
    {
        int r = a % b; /// calculating remaider  and repeating this step
        a = b;
        b = r;
    }

    return a;
}

int main()
{

    int n, a, b;
    // cin >> n >> a >> b;
    // cout << Divisible(n, a, b);
    cin >> a >> b;
    cout << GCD(a, b);

    return 0;
}
