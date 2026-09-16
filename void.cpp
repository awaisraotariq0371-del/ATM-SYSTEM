#include<iostream>

using namespace std;
void happybirthday(string name);
int main()
{

    string name;
    cout<<"ENTER YOUR NAME ";
    cin>>name;
    
    happybirthday( name);
}
void happybirthday(string name)
{
    cout<<"HAPPY BIRTH DAY TO  "<<name<<endl;
}