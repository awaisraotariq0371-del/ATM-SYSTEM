#include<iostream>
#include<cmath>
using namespace std;

// by using typedef alliases

using number_t = int;
using decimal_t = double;
using text_t = string;

int main()
{
    decimal_t price ;
    number_t quantity;
    number_t paymentmethod;
    //text_t  paymentmethod;
    decimal_t total;
    const decimal_t taxrate = 0.17;
    decimal_t finalbill;

    cout<<"ENTER PRICE ";
    cin>>price;
    cout<<"\nENTER QUANTITY ";
    cin>>quantity;
    cout<<"\nENTER PAYMENT METHOD ";
    cin>>paymentmethod;
    

    // using arithmetic method

    total = price * quantity;

    finalbill = total + (total * taxrate);
    sqrt(pow(finalbill,2));

    // by using if statement

    
    
    
    
    cout<<"--------- AWAIS EURO STORE--------"<<endl;

    
    cout<<"PRICE = "<<price<<endl;
    cout<<"QUANTITY = "<<quantity<<endl;
    cout<<"TOTAL WITHOUT TAX = "<<total<<endl;
    if(finalbill > 5000)
    {
        finalbill = finalbill - (finalbill * 0.10);
        cout<<"CONGRATULATION YOU GOT 10 %  DISCOUNT "<<endl;
        
    }
    
    cout<<"FINAL BILL WITH DECIMAL FORM = "<<finalbill<<endl;
    number_t bill = (decimal_t)finalbill;
    cout<<" BILL WITH 17 % TAX = "<<bill <<endl;
    switch (paymentmethod)
    {
    
        case 1:
               cout<<"PAYMENT THROUGH CASH "<<endl;
               break;
        case 2:
               cout<<"PAYMENT THROUGH CARD "<<endl;
               break;
        case 3:
               cout<<"PAYMENT THROUGH ONLINE "<<endl;
               break; 
        default:
               cout<<"INVALID "<<endl;       
    }
    cout<<"-------- THANK YOU HAVE A NICE DAY ! -----------"<<endl;
    cout<<"\n"<<endl;



}