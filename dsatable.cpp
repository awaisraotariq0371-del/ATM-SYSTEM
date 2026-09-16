#include<iostream>
using namespace std;
void print_table(int n)
{
    cout<<"TABLE OF "<<n<<" ARE THE FOLLOWING"<<endl;
    for(int i =1 ; i<=10; i++)
    {
        cout<<n<<"  *  "<<i<<" = "<<(n*i)<<endl;
    }
}
int calculate_factorial(int n)
{
    long long factorial;
    cout<<"FACTORIAL OF  "<<n<<" ARE FOLLOWING "<<endl;
     for(int i=1;i<=n;i++) 
    {

        cout<<factorial<<" * "<<i<<" = "<<(factorial=factorial * i )<<endl;

    }
    cout<<"FACTORIAL OF "<<n<<" = "<<factorial<<endl;
    return factorial;
    
}
int main()
{
    int table;
    int value;
    cout<<"ENTER ANY NUMBER FOR TABLE = ";
    cin>>table;
    cout<<"ENTER ANY VALUE FOR FACTORIAL = ";
    cin>>value;
    cout<<"\n-----------------------------------"<<endl;
    print_table(table);
    cout<<"\n-----------------------------------"<<endl;
    calculate_factorial(value);
    cout<<"\n-----------------------------------"<<endl;
}