#include <iostream>
using namespace std;

int factorial(int n)
{

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int Combination(int n, int r)
{

    // nCr = n! / (n-r)! * r! ;
    int ans;

    ans = factorial(n) / (factorial(r) * factorial(n - r));
    cout << " nCr = " << ans << endl;

    return ans;
}

void Pascal_Triangle(int n)
{

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " " << factorial(i) / (factorial(j) * factorial(i - j));
        }
        cout << endl;
    }
}

int main()
{

    int n, ans, r;
    cin >> n >> r;
    ans = Combination(n, r);
    cout << ans << endl;
    // cin >> n;
    // Pascal_Triangle(n);

    return 0;
}
