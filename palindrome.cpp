#include<iostream>

using namespace std;
int main()

{
    int n,r,t,sum=0;
    cout<<"ENTER A NUMBER :";
    cin>>n;

    t=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
     if(t==sum)
     {
        cout<<"PALINDROME NUMBER :"<<endl;
     }
    else
     {
        cout<<"NOT A PALINDROME NUMBER :"<<endl;
     }
}