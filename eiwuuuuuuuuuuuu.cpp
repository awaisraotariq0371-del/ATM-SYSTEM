#include<iostream>

#include<math.h>

using namespace std;
int main()
{
    int n;
    cout<<"ENTER A NUMBER :\t";
    cin>>n;
    float s= sqrt(n);
    cout<<s<<endl;
    if(s*s==n)
    {
        cout<<"IT IS A PERFECT SQUARE ROOT :\t"<<endl;
    }
    else
    {
        cout<<"IT IS NOT A PERFECT SQUARE ROOT :\t"<<endl;
    }
}