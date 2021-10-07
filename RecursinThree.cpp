#include <bits/stdc++.h>
using namespace std;

// Reverse a string using recursion

void ReverseString(string s)
{

    if (s.length() == 0)
    {
        return;
    }

    string ros = s.substr(1); /// It prints all character except first character
    ReverseString(ros);
    cout << s[0];
}

// pi replace with 3.14 in the given string

void ReplacePi(string s)
{
    if (s.length() == 0)
    {

        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {

        cout << "3.14";
        ReplacePi(s.substr(2));
    }

    else
    {
        cout << s[0];
        ReplacePi(s.substr(1));
    }
}

//  Tower of Hanoi Problem

void TowerOfHanoi(int n, char src, char dest, char helper)
{

    // n stands for number of blocks
    if (n == 0) //// Base case
    {

        return;
    }

    TowerOfHanoi(n - 1, src, helper, dest);
    cout << "Move from " << src << " to " << dest << endl;
    TowerOfHanoi(n - 1, helper, dest, src);
}

//Remobing Duplicate string

string removeDuplicate(string s)
{

    if (s.length() == 0)
    {

        return " ";
    }

    char ch = s[0];
    string ans = removeDuplicate(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }

    return ch + ans;
}

//// MOve all x to the end of the string.

string MoveallX(string s)
{

    if (s.length() == 0)
    {

        return " ";
    }

    char ch = s[0];
    string ans = MoveallX(s.substr(1));
    if (ch == 'x' || ch == ans[0])
    {

        return ans + ch;
    }
    return ch + ans;
}

// Generate all substrings of a given strings

void subseq(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans + ch);
}

// Generate substrings with ASCII NUMBER.

void SubseqCode(string s, string ans)
{

    if (s.length() == 0)
    {

        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    SubseqCode(ros, ans);
    SubseqCode(ros, ans + ch);
    SubseqCode(ros, ans + to_string(code));
}

// Print all possible words from phone digits

string KeypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans)
{

    if (s.length() == 0)
    {

        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string code = KeypadArr[ch - '0']; /// ch - '0' it converts character to integer .
    string ros = s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros, ans + code[i]);
    }
}

int main()
{

    cout << "I am Rajesh Gupta from varanasi." << endl;
    // string str;
    // cin >> str;
    //     string str1 = str.substr(2);
    //     cout<<str1<<endl;
    // ReverseString(str);
    // ReplacePi(str);
    // TowerOfHanoi(3 , 'A' , 'C' , 'B');
    // cout << removeDuplicate("aaaabbbbcccceeeedddd");
    // cout << MoveallX("aaacccvvvxxxxkkkxxddeexxff");
    // subseq("ABC", " ");
    // SubseqCode("AB", " ");
    keypad("23", "");
    return 0;
}
