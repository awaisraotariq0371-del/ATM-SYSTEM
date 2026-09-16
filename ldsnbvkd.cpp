#include<iostream>
using namespace std;
void function(int arr[],int size)
{
   
}
int main()
{
    
    int size;
    
    cout<<"ENTER TOTAL NUMBERS OF STUDENTS :";
    cin>>size;
    int array[size];
    cout<<"ENTER MARKS OF STUDENTS :";
    for(int i=0;i<size;i++)
    {
      cin>>array[i];
    }
    function(array,size);
    for(int i=0;i<size;i++)
    {
      cout<<"MARKS OF STUDENTS IS :"<<array[i]<<endl;

    }
     cout<<"SIZE OF ARRAY IS :"<<size<<endl;












}