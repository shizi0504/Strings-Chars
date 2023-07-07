#include <bits/stdc++.h>
using namespace std ;
char getMaxOccur(string s)
{
    int arr[26] = {0} ;
    
    //create an array of count of characters
    for(int i=0;i<s.size();i++)
    {
        char ch = s[i];
        int number = 0 ;
        if(ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a' ;
        }
        else
        {
            number = ch - 'A' ;
        }
        arr[number]++ ;
    }
    
    int maxi = -1, ans = 0 ;
    for(int j=0;j<26;j++)
    {
        if(arr[j]>maxi)
        {
            ans = j ;
            maxi = arr[j];
        }
        
    }
    char finalAns = 'a'+ ans ;
    return finalAns ;
}
int main()
{
    string str ;
    cout<<"Enter the string : ";
    getline(cin, str);
    cout<<"The string is : "<<str<<endl ;
    cout<<"The character that occurs most frequently is: "<<getMaxOccur(str)<<endl ;
    return 0;
}
