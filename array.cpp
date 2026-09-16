#include<iostream>

using namespace std;

/*int main()
{
    int array[5]= {10,23,45,33,26} ;
    
    for (int i=0;i<=4;i++)
    {
        cout<<"ARRAY = "<<array[i]<<","<<endl;
    }
    
    
}*/
void print_array(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"ARRAY = "<<array[i]<<","<<endl;
    }
}
int main()
{
    int number[10];
    int size ;
    cout<<"ENTER SIZE OF ARRAY = ";
    cin>>size;
    cout<<"ENTER THE NUMBER OR ARRAY = ";
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    
    
    print_array(number,size);
}