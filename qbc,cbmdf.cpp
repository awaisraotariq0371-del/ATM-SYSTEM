#include<iostream>

using namespace std;

int main()

{
    int i,j;

    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)

        {
            if(j==1 || j==9 || i==j && i<=5 || j==10-i && j>=5 )
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}