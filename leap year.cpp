#include<iostream>
using namespace std;
int main()

{
    int year;
    cout<<"ENTER A YEAR :\t";
    cin>>year;

    if(year%400==0 && year%100==0 && year%4==0)
    {
        cout<<"IT IS A LEAP YEAR :"<<endl;
    }
    else if(year%400!=0 && year%100==0 && year%4==0)
    {
        cout<<"IT IS NOT A LEAP YEAR :"<<endl;
    }
    else if(year%400!=0 && year%100!=0 && year%4==0)
    {
        cout<<"IT IS A LEAP YEAR :"<<endl;
    }
    else
    {
        cout<<"IT IS NOT A LEAP YEAR :"<<endl;
    }
}