#include<iostream>

using namespace std;
int main()
{
    int array[7];
    cout<<"ENTER A NUMBER :\t";
    
    for(int i=0;i<7;i++)
    {
        cin>>array[i];
    }
  
    for(int i=6;i>=0;i--)
    {
        cout<<","<<array[i];
    }
    
}