#include<iostream>

#include<string.h>

using namespace std;
int main()

{
     char str []="AWAIS TARIQ";
     int len = strlen(str);
     for(int i=len-1;i>=0;i--)
     {
        cout<<str[i];
     }


}