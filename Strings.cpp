#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// converting string to upper or lower case .
void conversionString()
{

    string str = "rajeshguptaisasoftwareengineer";

    // converting into the upper case.
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' and str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    // coverting into the lower case.
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' and str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout << str << endl;
}
void FrequeceString()
{
    string s = " asjfhibbbbbbbbbuewabvjashdfuga ";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    int maxF = 0;
    char ans = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout << maxF << " " << ans << endl;
}
int main()

{

    //  string str;
    // //  cin>>str;// this print only one word or without space
    //  getline(cin , str); /// this print all word with proper spaces .

    //  cout<<str;

    // string s1 = "fam";
    // string s2 = "ily";

    // cout << s1 + s2 << endl;
    // s1.append(s2);
    // cout << s1 << endl;
    // cout << s1[2] << endl;

    // string r = "I hate you Ankita Yadav because you are not a good girl for me .";
    // cout << r << endl;
    // r.clear();
    // cout << r;

    // string a = "Rajesh";
    // string b = "xyz";
    // cout<<a.compare(b)<<endl;

    // // a.clear();
    // if (!a.empty())
    // {
    //     cout<<"Sring is not empty ."<<endl;
    // }

    string str = "Hello friend what are you doing now";
    // cout << str.find("are") << endl;
    // cout << str.length() << endl;
    // str.insert(5, "Ankita");
    // cout << str << endl;
    // cout << str.erase(10, 15) << endl;

    // cout<<'a' - 'A'<<endl;

    // transform(str.begin(), str.end(), str.begin(), ::toupper);

    // cout << str << endl;
    // transform(str.begin(), str.end(), str.begin(), ::tolower);
    // cout << str << endl;

    // // conversionString();

    // string s = "139743854757";
    // sort(s.begin(), s.end(), greater<int>());
    // cout << s << endl;
    FrequeceString();
    return 0;
}  