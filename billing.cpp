#include<iostream>

#include<cmath>

using namespace std;
using text = string;
using decimal = float;
using number = int;
void input_data()
{

    cout<<"\n\t\t----------- AWAIS FAST FOOD CORNER -----------"<<endl;
    cout<<"\t\t--------- MENUE ---------"<<endl;
    cout<<" \n\t\tBURGER = 500 "<<endl;
    cout<<" \t\tPIZZA = 2100 "<<endl;
    cout<<"\t\tDRINK = 200 "<<endl;

}

int main()
{
    const decimal taxAmount = 0.10;
   // input_data();
    text customername;
    number choice;
    number quantity;
    number items;
    number repeat;
    decimal totalbill;
    decimal finalbill;
    number roundBill;
    decimal tax;
   
   finalbill = totalbill + tax;
    do
    {

        cout<<"ENTER CUSTOMER NAME ";
        getline (cin,customername);
        cout<<"HOW MANY ITEMS DO YOU WANT ";
        cin>>items;

        for(int i=1;i<=items; i++)
        {
            
            cout<<" ITEMS "<<i;
            input_data();
            cout<<"ENTER CHOICE ";
            cin>>choice;
            cout<<"ENTER QUANTITY ";
            cin>>quantity;

            switch(choice)
            {
             case 1:
                  totalbill += 500 * quantity;
                  break;
             case 2:
                 totalbill += 2100 * quantity;
                 break;
             case 3:
                 totalbill += 200 * quantity;
                 break;
             default :
                cout<<"INVALID CHOICE "<<endl;
            }   
            
           

            
            

            


            decimal tax = totalbill * taxAmount;  
            finalbill = totalbill + tax;
            number roundBill = (number)finalbill;
        }
    }while(repeat == 1);
            cout<<"\n 1. NEW ORDER "<<repeat<<endl;
            cout<<" 0. EXIT"<<repeat<<endl;


            if(totalbill > 3000)
            {
                cout<<"\nCONGRATULATION YOU GOT 10% DISCOUNT "<<endl;
            }
            (totalbill>3000)?
            cout<<"\nDISCOUNT APPLIED ": cout<<"NO DISCOUNT "<<endl;

   
    cout<<"\n\t\tCUSTOMER NAME "<<customername<<endl;
    cout<<"\t\tNUMBER OF ITEMS "<<items<<endl;
    cout<<"\t\tFINAL BILL "<<finalbill<<endl;
    cout<<"\t\tROUND BILL "<<roundBill<<endl;
}