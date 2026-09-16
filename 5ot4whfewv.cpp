#include<iostream>

using namespace std;

int main()

{
    int i,j;

    for(i=1;i<=9;i++)
    {
        for(j=1;j<=5;j++)

        {
            if(j==5 || j==6-i || i==5 || i==4+j)
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