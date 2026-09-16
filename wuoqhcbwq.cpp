#include<iostream>
using namespace std;
//namespace first{
    //int x=0;
//}
//namespace second{
    //int x=1;

//}
   /*typedef std::string text_t;
     typedef int number_t;*/
     using text_t=string;
     using number_t=int;
     using decimal_t=double;
     
int main()
{
   // int x=2;
  //  std::cout<<x<<"\n";

  text_t Name="AWAIS";
  number_t age=18;
  text_t University="ARID INSTITUTE OF MANAGEMENT SCIENCE LAHORE ";
  number_t Semester=3;
  decimal_t CGPA=3.86;
  text_t Course= "BS SOFTWARE ENGINEERING";

  cout<<"NAME = "<< Name<<endl;
  cout<<"AGE = "<< age<<endl;
  cout<<"UNIVERSITY = "<< University<<endl;
  cout<<"SEMESTER = "<< Semester<<endl;
  cout<<"CGPA = "<<CGPA<<endl;
  cout<<"COURSE = "<<Course<<endl;
  cout<<endl;
  

}