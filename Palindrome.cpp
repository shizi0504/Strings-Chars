#include <bits/stdc++.h>
using namespace std ;

bool valid(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch>='0' && ch <= '9'))
            return 1 ;
    return 0 ;
}

bool isPalindrome(string name)
{
    string temp ;
    for(int i=0;i<name.size();i++)
    {   
        // to remove whatespace and special characters
        if(valid(name[i]))
            temp.push_back(name[i]);
    }
    
    for(int j=0;j<=temp.size();j++)
    {
        temp[j] = tolower(temp[j]);
    }
    cout<<"The string is: "<<temp<<endl ;
    int begin = 0 ;
    int end = temp.size()-1 ;
    while(begin < end)
    {
        if(temp[begin] != temp[end])
            return false ;
        else
        {
        begin++ ;
        end-- ;
        }
    }
    return true ;
}
/*
bool isPalindrome(string name)
{
    int begin = 0 ;
    int end = name.size()-1 ;
    int i = 0 ;
    while(name[i])
    {
        i++ ;
        if(tolower(name[begin])!=(tolower(name[end])))
            return false ;
        begin++ ;
        end-- ;
    }
    return true ;
}
*/
int main()
{
    string name ;
    cout<<"Enter the name of the student: ";
    getline(cin, name);
    cout<<"Name is : "<<name<<endl ;
    cout<<"Length of the string : "<<name.size()<<endl ;
    /*
    string rev_str = reverse(name.begin(), name.end());
    cout<<"The reversed string is : "<<name<<endl ;
    */
    cout<<"Palindrome or not: "<<isPalindrome(name)<<endl ;
    
    
    
    
    
    return 0 ;
}
