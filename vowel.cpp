#include<iostream>


using namespace std;
int main()

{
    char c;
    cout<<"ENTER ANY CHAR :\t";
    cin>>c;


    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')

    {

        cout<<"VOWEL:"<<endl;
    }
    else
    {
        cout<<"CONSONANT LETTER :\t"<<endl;
    }
}