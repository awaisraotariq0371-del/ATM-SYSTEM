#include<iostream>
using namespace std;
int main()

{
    int a,b,r,lcm,hcf,x,y;
    cout<<"ENTER FIRST NUMBER : ";
    cin>>a;
    cout<<"ENTER SECOND NUMBER :";
    cin>>b;
    x=a;
    y=b;
    while(true)
    {
        lcm=a;
        r=a%b;
        if(r==0)
        {
            break;
        }
        a=a*2;
    }
    /* FORMULA TO CALCULATE THE HCF AND LCM TOGETHHER IS  [a*b = HCF*LCM] */
    hcf=x*y/lcm;


    cout<<"LCM IS = "<<lcm<<endl;
    cout<<"HCF IS = "<<hcf<<endl;
}
