#include<iostream>
#include<ctime>

using namespace std;

using number = int;

int  main()
{
    number guess;
    number tries;
    number num;

    srand(time(NULL));

    num  = (rand() % 100 ) + 1;

    cout<<"***** NUMBER GUESSING GAME ***** "<<endl;

    do
    {
        cout<<"ENTER A NUMBER BETWEEN (1-100) ";
        cin>>guess;
        tries++;

        if(guess > num)
        {
            cout<<"TOO HIGH "<<endl;
        }
        else if(guess< num)
        {
            cout<<"TOO LOW "<<endl;
        }
        else 
        {
            cout<<"CORRECT "<<num<<endl;
            cout<<"NUMBER OF TRIES "<<tries<<endl;
        }
    }
     while (guess != num);

    cout<<"********************* "<<endl;
    

}