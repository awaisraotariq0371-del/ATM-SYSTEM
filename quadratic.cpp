#include<iostream>

#include<cmath>

using namespace std;

int main()
{
    int a,b,c,d,r1,r2;

    cout<<"ENTER THE VALUE OF A :\t";
    cin>>a;
    cout<<"\nENTER THE VALUE OF B :\t";
    cin>>b;
    cout<<"\nENTER THE VALUE OF C :\t";
    cin>>c;
    d=(b*b-4*a*c);
    if(d>0)
    {
        cout<<"ROOTS ARE REAL AND UNEQUAL :\t"<<endl;
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        cout<<"THE VALUE OF R1 IS :\t"<<r1<<endl;
        cout<<"THE VALUE OF R2 IS :\t"<<r2<<endl;
    }
    if(d==0)
    {
        cout<<"ROOTS ARE REAL AND EQUAL :\t"<<endl;
        r1= -b/(2*a);
        r2= -b/(2*a);
        cout<<"THE VALUE OF R1 IS :\t"<<r1<<endl;
        cout<<"THE VALUE OF R2 IS :\t"<<r2<<endl;
    }
    else if (d<0)

    {   
        cout<<"ROOTS ARE IMAGINARY :\t"<<endl;
    }    
    
    
}