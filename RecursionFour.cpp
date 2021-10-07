#include <bits/stdc++.h>
using namespace std;

// Print all possible permutation of a string

void Permutation(string s, string ans)
{

    if (s.length() == 0)
    {

        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i]; /// fixing ith character
        // for geting character till i + for geting character till after i upto the length.
        string ros = s.substr(0, i) + s.substr(i + 1);
        Permutation(ros, ans + ch);
    }
}

// Count the number of paths starting to end in a gameboard

int countPath(int start, int end)
{

    if (start == end)
    {
        return 1;
    }
    if (start > end)
    {

        return 0;
    }

    int count = 0;
    for (int i = 0; i <= 6; i++)
    {
        count += countPath(start + i, end);
    }
    return count;
}

int main()
{

    // Permutation("ABC", "");
    cout << countPath(0, 3);

    return 0;
}