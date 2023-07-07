#include <bits/stdc++.h>
using namespace std;

string compressStr(string s)
{
    int i = 0;
    int count = 1;
    for (int j = 1; j < s.size(); j++)
    {
        if (s[j - 1] != s[j])
        {
            s[i] = s[j - 1];
            i++;
            if (count >= 2)
            {
                s[i] = '0' + count;
                i++;
            }
            count = 1;
        }
        else
        {
            count++;
        }
    }

    // Handle the last character
    s[i] = s[s.size() - 1];
    i++;
    if (count >= 2)
    {
        s[i] = '0' + count;
        i++;
    }

    return s.substr(0, i);
}

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "The string is: " << str << endl;
    cout << "The compressed string is: " << compressStr(str) << endl;

    return 0;
}
