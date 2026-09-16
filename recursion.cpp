#include<iostream>
using namespace std;
int print_number(int n,int limit)
{
    // base case:
    if(n>limit)
    {
        return n;
    }
    cout<<"THE NUMBER IS = "<<n<<endl;

    // recursive case for calling itself to function

    print_number(n+1,limit);
    return n;

}
int main()
{
    int number;
    int lastnumber;
    cout<<"ENTER A FIRST NUMBER TO START : ";
    cin>>number;
    cout<<"ENTER LAST NUMBER TO END : ";
    cin>>lastnumber;

    print_number(number,lastnumber);
}




///// TWO PROGRAM OF RECURSION 




int print_number(int n)
{
    // base case:
    if(n==0)
    {
        return n;
    }

    cout<<"THE NUMBER ARE = "<<n<<endl;

    // recursive case:


    print_number(n-1);
    return n;
}
int main()
{
    int maxnumber;
    cout<<"ENTER MAXIMUM NUMBER = ";
    cin>>maxnumber;
    print_number(maxnumber);
}