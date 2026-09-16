#include<iostream>

using namespace std;

int main()

{
    int i,j;
    char c = 'A';

    for(i=1;i<=5;i++)

    c= 'A';
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i && j<=4+i)
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