#include <bits/stdc++.h>
using namespace std;

int summation(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int prevSum = summation(n - 1);
    return (n + prevSum);
}

////// MULTIPLICATION TILL N
int Factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int prevFactorial = Factorial(n - 1);
    return (n * prevFactorial);
}

int nPowerp(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    int prevpower = nPowerp(n, p - 1);
    return (n * prevpower);
}

// find nth fibonacci number
int fib(int n)
{

    if (n == 0 || n == 1)
    {

        return n;
    }
    return (fib(n - 1) + fib(n - 2));
}

int main()
{
    // cout<<summation(5);

    // cout << Factorial(6) << endl;
    // cout << nPowerp(7, 4) << endl;

    cout << fib(4);

    return 0;
}