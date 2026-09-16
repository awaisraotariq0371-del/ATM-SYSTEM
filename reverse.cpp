#include<iostream>

using namespace std;

int main()
{
    int n,r,reverse=0;

    cout<<"ENTER A NUMBER :"; ////// suppose we enter a num is 123
    cin>>n;
    while(n!=0)
    {
        r=n%10;  //// 123%10=3
                 //// n=12%10=2
                 /// n=1%10=1
                 // the value of n is 0 so loop is end the the final answer is 321;
        reverse = reverse*10+r;  /// 0*10=0+3=3
                                 /// 3*10=30+2=32
                                 /// 32*10=320+1=321
        n=n/10; /// 123/10=12
                ///12/10=1
                //// 1/10=0
    }

    cout<<"THE REVERSE IS :"<<reverse;
}