#include<iostream>
using namespace std;
using number = int;
int main()
{

    number evencount=0;
    number oddcount=0;
    number size;
    number array[10];
    number total;
    cout<<"ENTER SIZE OF ARRAY :";
    cin>>size;
    
    for(number i=0;i<size;i++)
    {
        cout<<"ENTER NUMBERS IN ARRAY : ";
        cin>>array[i];

    }
    for(int i=0;i<size;i++)
    {
        if(array[i] % 2==0)
        {
            cout<<"-------------------------------"<<endl;
            
            evencount++;
            //cout<<"EVEN NUMBER : "<<evencount<<endl;
        }else
        {
            cout<<"-------------------------------"<<endl;
            
            oddcount++;
            //cout<<"ODD NUMBER : "<<oddcount<<endl;
        }
    }
    total=size;
    cout<<"\n-------------------------------"<<endl;
    cout<<"TOTAL NUMBERS : "<<total<<endl;
    cout<<"\n-------------------------------"<<endl;
    oddcount = total- evencount;
    evencount = total- oddcount;
    cout<<"EVEN NUMBERS : "<<evencount<<endl;
    cout<<"\n-------------------------------"<<endl;
    cout<<"ODD NUMBERS : "<<oddcount<<endl;
    cout<<"\n-------------------------------"<<endl;
    
}