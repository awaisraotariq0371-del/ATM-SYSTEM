#include<iostream>

using namespace std;
using text = string;
using number = int;
int main()
{
    string name;
    number n;
    //cout<<"enter your name ";
   // getline(cin,name);
   //do while loop are those whose run the code as 
   //first then check the while loop if condition is true 
   //then enter the while loop and provide the final answer
    do
    
    
    {
        cout<<"enter your number ";
        cin>>n;
    }
    while(n<10);
    {
         cout<<"your number "<<n<<endl;
    }
    for(number i=10;i>=0;i-=2)
    {
        cout<<i<<endl;
    }
    cout<<"HAPPY EID MUBARAK !"<<endl;
   
    
}