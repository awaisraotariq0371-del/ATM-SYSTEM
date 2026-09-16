#include<iostream>
using namespace std;
 void function(int array[],int number,int size,int &even,int &odd)
 {

    // base case
    if(number==size  )
    {
        return;
    }

    // condition check
    if(array[number]%2==0)
    {
        cout<<"EVEN NUMBER "<<endl;
        even++;
    }else
    {
    cout<<"ODD NUMBER "<<endl;
    odd++;
    }

    // recursive case

    function(array,number+1,size,even,odd);
 }
 int main()
 {
    int arrsize;
    int arrnumbers;
    
    int even = 0;
    int odd = 0;
    
    cout<<"ENTER SIZE OR ARRAY : ";
    cin>>arrsize;
    int arr[arrsize];
    for(int i=0;i<arrsize;i++)
    {
        cout<<"ENTER NUMBERS IN ARRAY : ";
        cin>>arr[i];

    }
    function(arr,0,arrsize,even,odd);
    int total = arrsize;
    cout<<"-------------------------------"<<endl;
    cout<<"TOTAL NUMBER : "<<total<<endl;
    even = total-odd;
    cout<<"-------------------------------"<<endl;
    cout<<"TOTAL EVEN NUMBER : "<<even<<endl;
    odd = total-even;
    cout<<"--------------------------------"<<endl;
    cout<<"TOTAL ODD NUMBER : "<<odd<<endl;
    cout<<"--------------------------------"<<endl;
 }
