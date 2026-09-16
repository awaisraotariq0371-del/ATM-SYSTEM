#include<iostream>
using namespace std;
int main()

{
    int x,y,z;
    cout<<"ENTER A NUMBER :";
    cin>>x;

    for(y=2;y<x;y++)
    {
       for(z=2;z<y;z++)
       {
        if(z%y==0)
        {
            cout<<"";
        }
       }
       if(z==y)
       {
        cout<<z<<endl;
       }
    }
}