#include<iostream>

using namespace std;
int main()
{
   /* int num = 2;
    while(num <= 20)
    {
         
        cout<<num<<" ";
        num = num + 2;
    }
    cout<<endl;*/

    /*int correctpin = 1234;
    int userpin;

    do
    {
        cout<<"ENTER USER PIN ";
        cin>>userpin;
        
    }while (userpin != correctpin);

    cout<<"USER PIN = "<<userpin<<endl;
    cout<<endl;
    
    
    
    
    return 0;*/
    int n; 
    cout<<"ENTER ANY NUMBER =";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"= "<<n*i<<endl;
    }
    cout<<endl;
    return 0;
}