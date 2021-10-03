#include <iostream>
using namespace std;

int n;

void Number_Pattern(int a)
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j;
        }

        cout << endl;
    }
}
void Rhombus_Pattern(int a)
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1 - i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << " *";
        }

        cout << endl;
    }
}

void ButterFly_Pattern(int a)
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        { /// this is above part of the butterfly
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"; /// this is below part of the butterfly
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void Star_Pattern(int a)
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void Pallindrome_Pattern(int b)
{
    cin >> n;
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int k = i;
        for (; j <= n; j++)
        {
            cout << " " << k--;
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << " " << k++;
        }

        cout << endl;
    }
}

int main()
{

    // Number_Pattern(n);
    // Rhombus_Pattern(n);

    // ButterFly_Pattern(n);
    // Star_Pattern(n);
    Pallindrome_Pattern(n);

    return 0;
}
