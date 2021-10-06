#include <iostream>
#include <string>
using namespace std;

void EnterString(char a[], int n)
{

    for (int i = 0; i < n + 1; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n + 1; i++)
    {
        cout << a[i] << " ";
    }
}

void checkingPallindrom()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;

    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])

        {
            check = 0;
            break;
        }
    }

    if (check == true)
    {
        cout << arr << " ,"
             << "It is a Pallindrome." << endl;
    }
    else
    {
        cout << arr << " ,"
             << "It is not a Pallindrome." << endl;
    }
}

void Largest_word()
{
    int n;

    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int currLen = 0, maxLen = 0;
    int i = 0;
    while (1)
    {
        if (arr[i] == ' ' or arr[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
            }

            currLen = 0;
        }
        else
        {
            currLen++;
        }

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << maxLen << endl;
}

int main()
{

#ifndef ONLINE_JUDDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // checkingPallindrom();
    Largest_word();
    return 0;
}
