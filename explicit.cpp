#include<iostream>
#include<cmath>
using namespace std;
using text_t = string;
using number_t = int;
using decimal_t = double;
using letter_t = char;
int main()
{

    // FIRST TOPIC 

    number_t age;
    text_t name;
    cout<<"How Old are You\t";
    cin>>age;
    cout<<"What is Your Name\t";
    getline(cin>>ws, name);

    cout<<"Assalamualikum "<<name<<endl;
    cout<<"You Are "<<age<<" Year Old"<<endl;

    // SECOND TOPIC

    number_t correct;
    number_t question;
    decimal_t score;
    cout<<"\nenter total question\t";
    cin>>question;
    cout<<"enter correct question\t";
    cin>>correct;
    score=correct/(decimal_t)question*100;
    cout<<"SCORE = "<<score<<"%"<<endl;

    // THIRD TOPIC

    decimal_t a;
    decimal_t b;
    decimal_t c;
    cout<<"\nEnter The Value of A ";
    cin>>a;
    cout<<"Enter The Value of B ";
    cin>>b;
    c = sqrt(pow(a,2) + pow(b,2));
    cout<<"C = "<<c<<endl;
   
   // FOURTH TOPIC

    number_t month;
    cout<<"\nEnter Month";
    cin>>month;

    switch(month)
    {

        case 1:
             cout<<"IT IS JANUARY";
             break;
        case 2:
             cout<<"IT IS FEBRUARY";
             break;
        case 3:
             cout<<"IT IS MARCH";
             break;
        case 4:
             cout<<"IT IS APRIL";
             break;
        case 5:
             cout<<"IT IS MAY";
             break;
        case 6:
             cout<<"IT IS JUNE";
             break;
        case 7:
             cout<<"IT IS JULY";
             break;
        case 8:
             cout<<"IT IS AUGUST";
             break;
        case 9:
             cout<<"IT IS SEPTEMBER";
             break;
        case 10:
             cout<<"IT IS OCTOBER";
             break;
        case 11:
             cout<<"IT IS NOVEMBER";
             break;
        case 12:
             cout<<"IT IS DECEMBER";
             break; 
        default:
             cout<<"Please Enter a Number Between (1-12)"<<endl;                                                      
    }

    
   letter_t grade;
   cout<<"Enter Your Grade ";
   cin>>grade;

   switch (grade)
   {
    case 'A':
            cout<<"OH MASHALLAH GREAT! "<<endl;
            break;
    case 'B':
            cout<<"OH  GREAT! "<<endl;
            break;
    case 'C':
            cout<<"CHALO KOI NI KHAIR HA  "<<endl;
            break;
    case 'D':
            cout<<"ITNA GANDA RESULT "<<endl;
            break;
    case 'E':
            cout<<"MAMI MA PASS HO GIAAA! "<<endl;
            break;
    case 'F':
            cout<<"TU FAIL HO GIA  "<<endl;
            break;
    default:
            cout<<"TARA RESULT NI AIA OY! "<<endl;                                        

   }
  
    
     

    
}