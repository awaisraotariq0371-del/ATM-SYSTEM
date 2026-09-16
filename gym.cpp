#include<iostream>

using namespace std;
using fee  = double;

fee calculatetotal(double monthlyrate , int month)
{
    return ((double)monthlyrate * month);
}
fee calculatetotal(double monthlyrate , int month , fee discount)
{
    fee total;
    total = monthlyrate * month;
    total = total -(total * discount / 100);
    return total;
}
int main()
{
    int choice;
    do

    {
        int month;
        fee const monthlyrate = 5000;
        double discount ;
        double total;
        double finalbill;
        cout<<"--------- GYM MEMBER SHIP ---------"<<endl;
        cout<<"\n 1. AMOUNT PROCESS "<<endl;
        cout<<"2. DISCOUNT PROCESS "<<endl;
        cout<<"3. VIEW SUBSCRIBTION "<<endl;
        cout<<"4. EXIT "<<endl;
        cout<<"\n ENTER YOUR CHOICE = ";
        cin>>choice;

        switch(choice)
        {
            case 1:
             


              cout<<"MONTHLY SUBSCRIBTION IS = "<<monthlyrate<<endl;
              cout<<"ENTER MONTH = ";
              cin>>month;
              break;
            case 2:
            
                
               if( month >= 6)
               {

                cout<<"CONGRATULATION YOU GOT 10 % DISCOUNT "<<endl;

                finalbill = calculatetotal(monthlyrate , month, 10.0);
                
                
               } 
               else
               {
                cout<<"DISCOUNT OFFER IS ELIGIBLE MOR THAN 5 MONTHS  "<<endl;
                finalbill = calculatetotal(monthlyrate , month);
               }
               break;
            case 3:
               cout<<"------ MY GYM SERVICE ------ "<<endl;
               cout<<"YOUR SUBSCRIBTION RECORD "<<endl;
               cout<<"YOUR TOTAL MONTH "<<month;
               cout<<"FIX MONTHLY RATE "<<monthlyrate<<endl;
               cout<<"\nYOUR FINAL BILL "<<finalbill<<endl;
 
               break;
            case 4:
               cout<<"GYM ADMISSION CLOSED !"<<endl;
               break; 
            default:
               cout<<"INVALID CHOICE "<<endl;
        }       

    }while (choice != 4);
    
    
}