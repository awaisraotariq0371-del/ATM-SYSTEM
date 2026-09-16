#include<iostream>


using namespace std;
int main()

{

    int i;


    for(i=1;i<=50;i++)
    {

        if(i%2==0)
        {
            cout<<"EVEN NUMBER :"<<i<<endl;
        }
       
    }
   
    cout<<"-------------///////////-----------"<<endl;

    for(i=1;i<=50;i++)
    {

        if(i%2!= 0)
        {
            cout<<"ODD NUMBER :"<<i<<endl;
        }
       
    }
     return 0;
}