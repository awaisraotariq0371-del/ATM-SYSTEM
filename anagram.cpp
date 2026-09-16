#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1= "angels";
    string s2= "angle";
    int len1 =s1.length();
    int len2 =s2.length();
    if(len1==len2)
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
        {
            cout<<"BOTH ARE ANAGRAM :\t"<<endl;
        }
        else
        {
            cout<<"BOTH ARE NOT ANAGRAM :\t"<<endl;
        }
    }
     else
        {
            cout<<"BOTH ARE NOT ANAGRAM :\t"<<endl;
        }
}