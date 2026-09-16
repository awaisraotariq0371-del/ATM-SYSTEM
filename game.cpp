#include<iostream>
#include<ctime>

using namespace std;
int main()
{
    srand(time(0));

       int randNumm =  rand() % 5+1;

       switch (randNumm)
      {
        case 1 :
               cout<<"CONGRATULATION YOU WON A MOTOR BIKE "<<endl;
                break;
        case 2 :
               cout<<"CONGRATULATION YOU WON UMRAH TICKET "<<endl;
               break;
        case 3 :
               cout<<"CONGRATULATION YOU WON DUBAI TOUR "<<endl;
               break;
        case 4 :
              cout<<"CONGRATULATION YOU WON WASHING MACHINE  "<<endl;
              break;
        case 5 :
             cout<<"CONGRATULATION YOU WON MOBILE PHONE "<<endl;
            break;              


        }
}