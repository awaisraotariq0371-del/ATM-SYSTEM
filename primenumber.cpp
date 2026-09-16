#include<iostream>


using namespace std;
/* HOW TO FIND PRIME FACTOR OF A NUMBER */

int main()
{
    int n ,i,j,count=0;
    cout<<"ENTER A NUMBER :\t";
    cin>>n;

    for(i=1;i<n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(j%i==0)
            {
                break;
            }
        }
        if(j==i)
        {
            if(n%i==0)
            {
                cout<<","<<i;
                count++;
            }
        }
    }
    if(count==0)
    {
        cout<<"NOT FOUND..."<<endl;
    }
}