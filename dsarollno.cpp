#include<iostream>
using namespace std;
int main()
{
    int entrollno;
    int rollno[10]={100,101,102,103,104,105,106,107,108,109};
    cout<<"PLEASE ENTER YOUR ROLL NO = ";
    cin>>entrollno;
    bool found = false;
    for(int i=0;i<10;i++)
    {
        if(rollno[i] == entrollno)
        {
            found = true;
            break;
        }
    }
    if(found)
    {
        cout<<"ROLL NO "<<entrollno<<" FOUND "<<endl;
    }else
        cout<<"ROLL NO "<<entrollno<<" NOT FOUND "<<endl;
}