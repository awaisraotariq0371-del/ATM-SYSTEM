#include<iostream>

#include<cmath>

using namespace std;
/// ~STUDENT RESULT SYSTEM~ ///
using number = int;
using decimal = double;
using text = string;
using decision = bool;
using letter = char;


int main()
{

   const number PassingMarks = 40;
   text name;
   decimal math;
   decimal science;
   decimal english;
   decimal urdu;
   decimal total;
   number section;
   decimal percentage;
   text result;
   letter grade;
   const number TotalMarks = 400;
   

   cout<<"ENTER NAME OF STUDENT ";
   getline(cin,name);
   cout<<"SECTION ";
   cin>>section;
   cout<<"SCIENCE =  ";
   cin>>science;
   cout<<"MATH = ";
   cin>>math;
   cout<<"ENGLISH = ";
   cin>>english;
   cout<<"URDU = ";
   cin>>urdu;

   total = science + english + math + urdu;
   percentage = (total/TotalMarks)*100;

   //sqrt(total);
   number per = (decimal)percentage;

   cout<<"-------- STUDENT RESULT SYSTEM -------- "<<endl;

   cout<<"SCIENCE = "<<science<<endl;
   cout<<"MATH = "<<math<<endl;
   
   cout<<"ENGLISH = "<<english<<endl;
   cout<<"URDU = "<<urdu<<endl;
   cout<<"OBTAINED MARKS = "<<total<<endl;
   cout<<"PERCENTAGE % = "<<per<<endl;
   if(per >=50 && per<=65)
   {
    cout<<"GRADE = C"<<endl;
   }
   else if (per >=66 && per <=75)
   {
    cout<<"GRADE = B"<<endl;
   }
   else if(per >=76 && per <=85)
   {
    cout<<"GRADE = A"<<endl;
   }
   else if(per >=86 && per <=100)
   {
    cout<<"GRADE = A+"<<endl;
   }
   
   
   switch (section)
   {
    case 1:
           cout<<"SCIENCE GROUP "<<endl;
           break;
    case 2:
           cout<<"COMMERCE GROUP "<<endl;
           break;
    case 3:
           cout<<"ARTS GROUP "<<endl;
           break;
    default: 
           cout<<"INVALID SECTION "<<endl;


   }
   
   
   if(per < 50)
   {
    
    cout<<"YOU HAVE FAILED THIS EXAM"<<endl;     }
   
   

}
