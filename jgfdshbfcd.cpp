#include<iostream>

using namespace std;

/*void printNum(int myNum)
{
    

    cout<<"MY NUMBER = "<<myNum<<endl;
   
}
void printNum( int myNum  , double number)
{

    cout<<"MY NUMBER = "<<myNum<<"\t"<<number<<endl;
}
void printNum(int myNum  , double number, double numb)
{

   cout<<"MY NUMBER = "<<myNum<<"\t"<<number<<"\t"<<numb<<endl;
}
int main()
{
    
  printNum(12);
  printNum(32.34,33.456);
  printNum(123,45.67,89.90);

}*/
/*void num(int number)
{

    cout<<"MY NUMBER = "<<number<<endl;
}
int main()
{
    double digit;
    cout<<"ENTER ANY DIGIT NUMBER ";
    cin>>digit;
    num(digit) ;
    cout<<"MY NUMBER = "<<digit<<endl;
}*/
void setvalue(double number)
{

    cout<<"1ST SET VALUE [THE VALUE OF NUMBER] = "<<number<<endl;
}
void setvalue(string name, double digit)
{

  cout<<"2ND SET VALUE [THE NAME] = "<<name<<endl;
  cout<<"2ND SET VALUE [THE VALUE OF NUMBERS] = "<<"\t"<<digit<<endl;
}
void setvalue(double number, int digit, string name)
{
    cout<<"3RD SET VALUE [THE VALUE OF NUMBERS] = "<<number<<"\t"<<digit<<endl;
    cout<<"3RD SET VALUE [THE NAME] = "<<name<<endl;
}
int main()
{
    double dail;
    double numb;
    string write;
    cout<<"ENTER ANY CHARACTER TO WRITE = ";
    getline(cin,write);
    cout<<"ENTER ANY NUMBER TO DAIL = ";
    cin>>dail;
    cout<<"ENTER ANY NUMBER TO CHOSE = ";
    cin>>numb;
    cout<<"-----------------------------------"<<endl;
   

    setvalue(dail);
    cout<<"\n-----------------------------------"<<endl;
    setvalue(write,numb);
    cout<<"\n-----------------------------------"<<endl;
    setvalue(dail,numb,write);

}
