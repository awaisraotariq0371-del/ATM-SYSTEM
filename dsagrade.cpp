#include<iostream>
using namespace std;
char print_remark(char grade)
{
    cout<<"YOUR GRADE : "<<grade<<endl;
    switch(grade)
    {

        case 'A':
              cout<<"EXCELLENT WORK !"<<endl;
              break;
        case 'B':
              cout<<"GOOD JOB !"<<endl;
              break;
        case 'C':
              cout<<"NEED IMPROVEMENT !"<<endl;
              break;
        case 'F':
              cout<<"YOU FAIL !"<<endl;
              break;
        default:
               cout<<"INVALID GRADE !"<<endl;                        
    }
    return grade;
}
int main()
{
    char Grade;
    cout<<"ENTER YOUR GRADE [A-F] : ";
    cin>>Grade;
    print_remark(Grade);
}