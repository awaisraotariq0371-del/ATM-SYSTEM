#include<iostream>

using namespace std;
void print_pattern(int choice, int limit)
{
   
    
    if(choice == 1)
    {
        for(int i=0;i<=limit;i++)
        {
            cout<<","<<i;
        }
    }
    else if(choice == 2)
    {
        for(int i=1;i<=limit;i++)
        {
            cout<<" * ";
        }
    }
    else if(choice != 1 && choice != 2)
    {
        cout<<"ERROR "<<endl;
        cout<<"PLEASE CHOOSE FROM 1 AND 2 ONLY "<<endl;
    
    }
}
int main()
{
    int number,lastnum;
    int choose;
    do
    {
    
    
    cout<<"1.\t[1 FOR COUNTING] "<<endl;
    cout<<"2.\t[2 FOR STAR (*)] "<<endl;
    cout<<"3.\t[ FOR EXIT] "<<endl;
    cout<<"\tENTER YOUR CHOICE = ";
    cin>>choose;
    cout<<"\n-----------------------------"<<endl;
    cout<<"ENTER NUMBER TO CHOOSE = ";
    cin>>number;
    cout<<"ENTER LAST NUMBER = ";
    cin>>lastnum;
    cout<<"\n-----------------------------"<<endl;
 
    print_pattern(number,lastnum);
    cout<<"\n-----------------------------"<<endl;
    }while(choose != 3 && choose <=3);
    cout<<"\n------------- THANKS FOR CHOOSING US----------------"<<endl;
}