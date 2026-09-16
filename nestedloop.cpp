#include<iostream>
#include<ctime>
using namespace std;

int main()
{
   // int rows;
   // int columns;
   // char symbol;

   /* cout<<"ENTER A ROWS ";
    cin>>rows;

    cout<<"ENTER A COLUMNS ";
    cin>>columns;

    cout<<"ENTER A SYMBOL ";
    cin>>symbol;

    // by using nested loop
    for(int i=1;  i<=rows; i++)
    {
        for (int j=1;j<=columns; j++)
        {
            cout<<symbol;
        }
        cout<<endl;
    }*/
   int srand(time(0));

   int num1 = (rand() % 20) +1;
   int num2 = (rand() % 20) +1;
   int num3 = (rand() % 20) +1;
   cout<<num1<<endl;
   cout<<num2<<endl;
   cout<<num3<<endl;
    //return 0;
}