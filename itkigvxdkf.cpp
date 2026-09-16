#include<iostream>

using namespace std;
int main()
{
    int max;
    int array[]={2,34,21,34,56,67,87};
   // for(int i=0;i<array[i];i++)
   // {
       
   // }
    max=array[0];
    for(int i=1;i<7;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    

    cout<<"\tMAXIMUM NUMBER IN ARRAY IS :\t"<<max<<endl;

}