#include<iostream>

using namespace std;

int main()

{
    int f,i,n;
    cout<<"ENTER THE VALUE OF N :\t";
    cin>>n;
    f=n;
    for(i=1;i<n;i++)
    {
        cout<<f<<"*"<<i<<"=";

        f=f*i;
        cout<<f<<endl;
       
    }
     cout<<"THE FACTORIAL IS :\t"<<f<<endl;
}