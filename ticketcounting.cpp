#include<iostream>

using namespace std;

int main()
{
    int choice;
    //int Tickettype;
    int totalEarning = 0;
    //int Ticket;
   // int second = 5;

   
    do
    {
        cout<<"-----------------TICKET COUNTING SYSTEM  -----------------"<<endl;
        cout<<"\n\t\t (------ WELCOME TO GADDAFI STADIUM ------)"<<endl;
        cout<<"\t\t 1. PRINT NUMBER OF TICKETS "<<endl;
        cout<<"\t\t 2. BUY A TICKETS "<<endl;
        cout<<"\t\t 3. CHECK TOTAL EARNING "<<endl;
        cout<<"\t\t 4. CLOSING WARNING ! "<<endl;
        cout<<"\t\t 5. EXIT "<<endl;
        cout<<"\t\t    ENTER YOUR CHOICE = ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                 {
                int Ticket;
                cout<<"HOW MANY TICKET DO YOU WANT = ";
                cin>>Ticket;
                
                for(int i =1; i<=Ticket; i++)
                {
                    cout<<" PASS #"<<i<<endl;
                    
                }
            }    
                break;
            

            case 2:
            
               
                int Tickettype;
                int quantity;
                 cout<<"\n 1. VIP STAND = 1000 "<<endl;
                 cout<<"  2. GENERAL STAND = 500 "<<endl;
                 cout<<"  3. PREMIUM STAND = 1500 "<<endl;


                 cout<<"BUY A TICKET = ";
                 cin>>Tickettype;
                 cout<<"QUANTITY OF TICKETS = ";
                 cin>>quantity;
                 if(Tickettype == 1)
                 {
                    cout<<"PLEASE PAY 1000 RS PER TICKET"<<endl;
                    totalEarning = totalEarning + (1000 * quantity);
                    cout<<"THANKS FOR PAYING  "<<totalEarning<<endl;
                 }else if (Tickettype == 2)
                 {
                    cout<<"PLEASE PAY 500 RS "<<endl;
                    totalEarning = totalEarning + (500 * quantity);
                    cout<<"THANKS FOR PAYING  "<<totalEarning<<endl;
                 }else if (Tickettype == 3)
                 {
                    cout<<"PLEASE PAY 1500 RS "<<endl;
                    totalEarning = totalEarning +( 1500 * quantity);
                    cout<<"THANKS FOR PAYING  "<<totalEarning<<endl;
                 }
                
                 break;
            case 3:
                cout<<"TOTAL EARNING = "<<totalEarning<<endl;
                if(totalEarning > 5000)
                {
                    cout<<"HOUSE FULL THANK YOU LAHORE "<<endl;
                }  else
                {
                    cout<<"REMAINING TICKETS = 17 "<<endl;
                } 
                break;
            case 4:
            {
                int second =5;
                while(second>0)  
                {
                    cout<<"COUNTER CLOSED IN "<<second<<" SECOND"<<endl;
                    second = second-1;
                } 
            }      
                break;
            case 5:
                cout<<"COUNTER CLOSE !"<<endl; 
                break;
                
            default:   
                cout<<"INVALID CHOICE "<<endl; 
                 
        }
    } while (choice != 5);

    return 0;
    
}