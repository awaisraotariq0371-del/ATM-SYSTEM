#include<iostream>

using namespace std;

int main()
{
    int n,r,sum=0,t;
    cout<<"ENTER A NUMBER :";
    cin>>n;

    t=n;

    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }

    if(t==sum)
    {
        cout<<"ARMSTRONG NUMBER :"<<endl;
    }
    else
    {
       cout<<"NOT ARMSTRONG NUMBER  :"<<endl;
    }
    /*HOW TO WRITE HELLO WORLD WITHOUT SEMI-COLON */
    if(cout<<"HELLO WORLD :")
    {
        
    }
}