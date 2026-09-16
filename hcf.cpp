#include<iostream>
using namespace std;
int main()



{
    int a,b,r,hcf;
    cout<<"ENTER NUMBER :";
    cin>>a;
    cout<<"ENTER NUMBER :";
    cin>>b;
    while(true)
    {
        hcf=b;
        r=a%b;
        a=b;
        b=r;
        if(b==0)
        {
            break;
        }

    }
    cout<<"HCF IS ="<<hcf<<endl;
}