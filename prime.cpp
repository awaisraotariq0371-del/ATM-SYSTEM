#include<iostream>
using namespace std;

int main()

{
    int i,n;
    cout<<"ENTER A NUMBER :";
    cin>>n;

    for( i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"IT IS NOT A PRIME NUMBER :"<<endl;
            break;
        }


    }
     if(i==n)
        {
            cout<<"IT IS PRIME NUMBER :"<<endl;
        }
}