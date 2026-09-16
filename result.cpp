#include<iostream>
using namespace std;
double checkresult(double mark[])
{
    
    return 0;
}
int main()
{
    int size;
    cout<<"ENTER NUMBERN OF STUDENTS :";
    cin>>size;
    double marks[size];
    for(int i=0;i<size;i++)
    {
        cout<<"ENTER MARKS OF STUDENTS :";
       cin>>marks[i];
       if(marks[i]>=50)
    {
        cout<<"PASS :"<<endl;
    }
    else
    {
        cout<<"FAIL :"<<endl;
    }
    }
    checkresult(marks);


}