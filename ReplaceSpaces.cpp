#include <bits/stdc++.h>
using namespace std ;
string removeWhitespaces(string s)
{
    string temp ;
    for(int i=0;i<s.size();i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            temp.push_back(s[i]);
        }
        else
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        
    }
    return temp ;
}
int main()
{
    string str ;
    cout<<"Enter the string : ";
    getline(cin, str);
    cout<<"The string is: "<<str<<endl ;
    cout<<"The new string is: "<<removeWhitespaces(str);
    return 0 ;
}
