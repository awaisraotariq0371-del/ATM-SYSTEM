#include<iostream>
#include<iomanip>
using namespace std;

void check_balance(double currentbalance,double amount)
{
    if(amount<= currentbalance)
    {
        cout<<"WITHDRAWL SUCCESSFULLY !"<<endl;
        currentbalance -= amount;
        cout<<"YOUR CURRENT BALANCE :"<<fixed<<setprecision(5)<<currentbalance<<endl;
    }else
    {
        cout<<"INSUFFICIENT BALANCE !"<<endl;
        cout<<"YOUR BALANCE : "<<fixed<<setprecision(5)<<currentbalance<<endl;
    }
}
int main()
{
    double balance = 500000.55000;
    double withdrawl;
    cout<<"ENTER WITHDRAWL AMOUNT : ";
    
    cin>>withdrawl;
    check_balance(balance,withdrawl);
}