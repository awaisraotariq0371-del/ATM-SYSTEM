#include<iostream>

using namespace std;

int main()

{
int a,b,c;
cout<<"ENTER THE VALUE OF A :\t";
cin>>a;
cout<<"ENTER THE VALUE OF B :\t";
cin>>b;
c=a;

a=b;
b=c;
cout<<"SWAPPING THE VALUE OF A IS :\t"<<a<<endl;
cout<<"SWAPPING THE VALUE OF B IS :\t"<<b<<endl;


  int x=19;
  int   y=24;
  x=x+y;
  y=x-y;
  x=x-y;
  cout<<"AFTER SWAPPING THE VALUE OF X IS :\t"<<x<<endl;
   cout<<"AFTER SWAPPING THE VALUE OF Y IS :\t"<<y<<endl;
}
