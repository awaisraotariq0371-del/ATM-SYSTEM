#include<iostream>

using namespace std;

/*double square( double length)
{

    return length * length;
}
int main()
{
    double length = 5.0;
    double area = square(length);
    cout<<"AREA = "<<area<<"CM^2"<<endl;
    return 0;
}*/

/*string  name(string string1 , string string2)
{
    return string1 + " " + string2;
}
int main()
{
    string string1 = "MUHAMMAD";
    string string2 = "AWAIS";
    string fullname = name(string1 , string2);
    cout<<"HELLO "<<fullname<<endl;
    return 0;
}*/
/*double calculatestrikerate()
{
    double balls;
    double runs;
    cout<<"ENTER RUNS ";
    cin>>runs;
    cout<<"ENTER BALL FACED ";
    cin>>balls;

    return ((double)runs/balls) * 100;
}
int main()
{
    double strikerate = calculatestrikerate();
    
    cout<<"YOUR STRIKE RATE = "<<strikerate<<endl;
}*/

/*void check(int number)
{
   // cout<<"ENTER ANY NUMBER =";
    //cin>>number;

    if(number%2== 0)
    {
        cout<<"NUMBER IS EVEN "<<endl;
    }else
    {
        cout<<"NUMBER IS ODD "<<endl;
    }
}
int main()
{
     check(234);
}*/
int calculateArea(int side)
{
    return side * side;
}
int calculateArea(int length , int width)
{
    return length * width;
}
double calculateArea(double radius)
{
    return 3.14 * radius * radius;
}
int main()
{
    cout<<"AREA OF SQUARE = "<<calculateArea(6)<<endl;
    cout<<"AREA OF RECTANGLE = "<<calculateArea(7,3)<<endl;
    cout<<"AREA OF CIRCLE = "<<calculateArea(6.78)<<endl;
    return 0;
}