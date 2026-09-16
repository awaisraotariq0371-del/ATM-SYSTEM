#include<iostream>
using namespace std;
using number = int;
using text = string;
using decision = bool;
int main()
{
   // number marks;
   // cout<<"ENTER MARKS ";
   // cin>>marks;
    // ternary operator instead of if/else statement
   // marks>=100 ? cout<<"YOU PASS "<<endl : cout<<"YOU FAIL "<<endl;

   // marks % 2 == 0 ? cout<<"EVEN "<<endl : cout<<"ODD "<<endl;

   //decision  hungry =true;
   /*decision sunny  ;
   if(sunny)
   {
    cout<<"it is cloudy outside";
   }
   else
   {
    cout<<"it is sunny";
   }
  // cout<<(hungry ? "you are hungry " : "you are not hungry");*/

  text name;
  cout<<"ENTER YOUR NAME ";
  getline(cin,name);

  name.length()>12?
  
    cout<<"YOU CAN'T TYPE YOUR NAME MOR THAN 12 CAHRACTER ":
  
  
  
    cout<<"WELCOME "<<name<<endl;
  
 /*if(name.empty())
 {
  cout<<"YOUR DID NOT ENTER YOUR NAME "<<endl;
 }
 else
  {
    cout<<"WELCOME "<<name;
  }
   return 0; */

   // append method for typing gmail 
   name.append("@gmail.com");
   cout<<"YOUR USERNAME IS "<<name;
}



