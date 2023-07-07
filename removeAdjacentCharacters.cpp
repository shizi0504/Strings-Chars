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



#include <iostream>
#include <string>
using namespace std;

void removeAdjchar(string& s)
{
    int writeIndex = 0; // Index to track the current position to write in the string

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[writeIndex]) // Check if the current character is different from the character at writeIndex
        {
            writeIndex++;
            s[writeIndex] = s[i]; // Overwrite the character at writeIndex with the current character
        }
    }

    s.resize(writeIndex + 1); // Resize the string to remove any leftover characters
}

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "The string is: " << str << endl;
    removeAdjchar(str);
    cout << "Modified string: " << str << endl;
    return 0;
}
