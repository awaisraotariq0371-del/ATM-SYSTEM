#include<iostream>

using namespace std;

int main()
{
    int i,j;
    char c='A';

    
    for(i=1;i<=5;i++)
    {
        
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                cout<<c;

                c++;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}