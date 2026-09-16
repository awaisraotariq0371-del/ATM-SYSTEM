#include<iostream>

using namespace std;

void checkreward(int points)
{
    cout<<"YOUR BONUS POINTS = "<<points<<endl;
}
void checkreward(double points)
{
    cout<<"YOUR BONUS POINTS = "<<points<<endl;
}
int main()
{
    int choice;
    int point;
    double points;
    do
    {
        cout<<"---------- ONLINE SHOOPING APP ---------- "<<endl;
        cout<<"\n 1. CHECK BONUS POINTS "<<endl;
        cout<<"\n 2. CALCULATE TOTAL SHOOPING ITEMS "<<endl;
        cout<<"\n 3. EXIT "<<endl;
        cout<<"------------------------------------------ "<<endl;
        cout<<"ENTER YOUR CHOICE = ";
        cin>>choice;
        cout<<"------------------------------------------ "<<endl;

        switch(choice)
        {
            case 1:
                  {
                    int choose;
                    cout<<"\n 1.[POINTS IN INTEGER TYPES ] "<<endl;
                    cout<<"\n 2.[POINTS IN DECIMAL FORM ] "<<endl;
                    cout<<"ENTER YOUR CHOICE = ";
                    cin>>choose;
                    if(choose == 1)
                    {
                        cout<<"ENTER YOUR POINTS IN INTEGER FORM  = ";
                        cin>>point;
                        checkreward(point);
                    }
                    else if(choose == 2)
                    {
                        cout<<"ENTER YOUR POINTS IN DECIMAL FORM = ";
                        cin>>points;
                        checkreward(points);
                    }
                  }
                  break;
            case 2:
                 {
                    int total = 0;
                    int itemrate[5]={450,555,670,765,1004};
                    string item[5]={"VEGETABLES","COOKING OIL","ELECTRICITY ACCESORIES","PLASTIC ITEMS","MUTTON"};
                    for(int i=0;i<5;i++)
                    {
                        cout<<item[i]<<" = "<<itemrate[i]<<endl;
                    }
                    for(int i = 0;i<5;i++)
                    {
                        total +=itemrate[i];
                    }
                    cout<<"\n------------------------------------------ "<<endl;
                    cout<<"YOUR TOTAL = "<<total<<endl;
                    cout<<"------------------------------------------ "<<endl;
                    if(total>=2000)
                    {
                        cout<<"DISCOUNT APPLIED "<<endl;
                    }else
                    cout<<"NO DISCOUNT APPLIED "<<endl;
                 } 
                 break;
            case 3:
                 cout<<"------------------------------------------ "<<endl;
                 cout<<"THANKS FOR SHOOPING !"<<endl;
                 cout<<"------------------------------------------ "<<endl;
                 break;
            default:
                 cout<<"INVALID CHOICE !"<<endl;

        }

    }while(choice != 3 && choice <= 3);
    
}