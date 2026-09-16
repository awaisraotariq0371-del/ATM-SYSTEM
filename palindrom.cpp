#include<iostream>

using namespace std;
int main()

{
    int n,r;
    int sum=0;
    cout<<"ENTER A NUMBER :";
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<"THE SUM IS :\t"<<sum;
}