#include <bits/stdc++.h>
using namespace std ;
string removeSubstring(string s, string pat)
{
    while(s.length()!=0 && s.find(pat) < s.length())
    {
        s.erase(s.find(pat), pat.length());
    }
    return s ;
}
int main()
{
    string str ;
    cout<<"Enter the string: ";
    getline(cin, str);
    string pattern ;
    cout<<"The string is: "<<str<<endl ;
    cout<<"Enter the pattern of your choice: ";
    getline(cin, pattern);
    cout<<removeSubstring(str, pattern);
    return 0 ;
}
