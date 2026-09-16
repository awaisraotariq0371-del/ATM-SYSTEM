#include<iostream>

#include<string>

using namespace std;

int main()
{
    // if we take getline function: 
    string str ;
    cout<<"ENTER A STRING NAME :\t";
    getline(cin,str);
    cout<<str<<endl;
     /*
    if we take get function:
    char str[100];
    cout<<"ENTER A STRING NAME :\t";
    cin.get(str,190);
    cout<<str<<endl;
    */

    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a'|| str[i]=='A')
        {
            continue;
        }
         if(str[i]=='e'|| str[i]=='E')
        {
            continue;
        }
         if(str[i]=='i'|| str[i]=='I')
        {
            continue;
        }
         if(str[i]=='o'|| str[i]=='O')
        {
            continue;
        }
         if(str[i]=='u'|| str[i]=='U')
        {
            continue;
        }
        else
        {
            cout<<str[i];
        }
    }
   
}