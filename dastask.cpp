#include<iostream>
#include<cmath>

using namespace std;
/*double calculator(double result)
{
    return result;
}*/
int main()
{
    double number1;
    double number2;
    int choice;
    double result;
    do
    {
        cout<<"---------- CALCULATOR ------------"<<endl;
        cout<<"\t1. FOR ADDITION "<<endl;
        cout<<"\t2. FOR SUBSTRACTION "<<endl;
        cout<<"\t3. FOR MULTIPLICATION "<<endl;
        cout<<"\t4. FOR DIVISION "<<endl;
        cout<<"ENTER ANY CHOICE ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                 cout<<"ENTER FIRST NUMBER = ";
                 cin>>number1;
                 cout<<"ENTER SECOND NUMBER = ";
                 cin>>number2;
                 result = number1 + number2;
                 cout<<"RESULT AFTER ADDITION "<<result<<endl;
                 break;
            case 2:
                cout<<"ENTER FIRST NUMBER = ";
                cin>>number1;
                cout<<"ENTER SECOND NUMBER = ";
                cin>>number2;
                result = number1 - number2;
                cout <<"RESULT AFTER SUBSTRACTION = "<<result<<endl;
                break;
            case 3:
                cout<<"ENTER FIRST NUMBER = ";
                cin>>number1;
                cout<<"ENTER SECOND NUMBER = ";
                cin>>number2; 
                result = number1 * number2;
                cout<<"RESULT AFTER MULTIPLICATION = "<<result<<endl;
                break;
            case 4:
                cout<<"ENTER FIRST NUMBER = ";
                cin>>number1;
                cout<<"ENTER SECOND NUMBER = ";
                cin>>number2; 
                
                if(number2 == 0)
                {
                    cout<<"ERROR "<<endl;
                }   
                else
                {
                    result = number1 / number2;
                    cout<<"RESULT AFTER DIVISION = "<<result<<endl;
                } 
                break;       
        }
    }while(choice != 4);
    
}