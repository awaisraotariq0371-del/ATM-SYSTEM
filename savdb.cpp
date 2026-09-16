#include<iostream>

using namespace std;

int main()

{
    int a,b,c;
    cout<<"ENTER A NUMBER :";
    cin>>a;
    for(b=2;b<a;b++)
    {
       for(c=2;c<b;c++)
       {
          if(b%c==0)
          {
            cout<<"";
            break;
          }
       }
       if(c==b)
       {
        cout<<","<<c;
       }
      
    }
}