#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void BinarytoDecimal()
{
    int n;
    cin >> n;
    int ans = 0;
    int x = 1; //base
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    cout << " Binary to Decimal Number is : " << ans << endl;
}

void OctaltoDecimal()
{
    int n;
    cin >> n;
    int ans = 0;
    int x = 1; /// Initially always base 1 for any coversion
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    cout << "Octal to Decimal Number is :" << ans << endl;
}

void HexadecimalToDecimal()
{

    string n;
    cin >> n;
    int ans = 0;
    int x = 1;
    int s = n.size();

    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {

            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }

    cout << "Hexadecimal to Decimal Number is here : " << ans << endl;
}

void DecimaltoBinary()
{

    int n;
    cin >> n;
    int ans = 0;
    int x = 1;
    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;

    while (x > 0)

    {

        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }

    cout << "Decimal to Binary Number is :" << ans << endl;
}

void DecimalToOctal()
{

    int n;
    cin >> n;
    int ans = 0;
    int x = 1;
    while (x <= n)
    {
        x *= 8; //BASE
    }
    x /= 8;

    while (x > 0)

    {

        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 8;
        ans = ans * 10 + lastDigit;
    }

    cout << "Decimal to OCTAL Number is :" << ans << endl;
}

void DecimaltoHexadecimal()
{

    int n;
    cin >> n;
    string ans = "";
    int x = 1;
    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;

    while (x > 0)

    {

        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 16;
        if (lastDigit <= 9)
        {

            ans = ans + to_string(lastDigit);
        }
        else
        {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }

    cout << "Decimal to Hexadecimal Number is :" << ans << endl;
}

void AddingtwoBinaryNumber()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    int prevCarry = 0;
//   Pending for next order.
}

int main()

{

    // BinarytoDecimal();
    // OctaltoDecimal();
    // HexadecimalToDecimal();
    //  DecimaltoBinary();
    // DecimalToOctal();
    DecimaltoHexadecimal();
    return 0;
}
