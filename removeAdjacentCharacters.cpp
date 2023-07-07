#include <bits/stdc++.h>
using namespace std ;
string removeAdjchar(string s)
{
    string temp = "";
    temp.push_back(s[0]);
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=temp.back())
            temp.push_back(s[i]);
    }
    return temp ;
}
int main()
{
    string str ;
    cout<<"Enter the string : ";
    getline(cin, str);
    cout<<"The string is : "<<str<<endl ;
    cout<<removeAdjchar(str);
    return 0 ;
}
