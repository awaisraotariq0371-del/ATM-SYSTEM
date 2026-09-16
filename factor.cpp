#include<iostream>

using namespace std;
/* HOW TO FIND THE FACTOR OF ANY NUMBERSSNN */

int main()
{
    int a;

    cout<<"ENTER A NUMBER :\t";
    cin>>a;

    for(int i=1; i<a;i++)
    {
        if(a%i==0)
        {
            cout<<","<<i;
        }
    }
}