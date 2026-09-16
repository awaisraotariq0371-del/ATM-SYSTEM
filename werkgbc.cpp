#include <iostream>
using namespace std;

void calculate_sum(int* array, int size) 
{
    int sum = 0;
    
    // --- TASK 1: Yahan loop chalayein jo 'size' tak chale ---
    for(int i = 0; i < size; i++) 
    {
        // --- TASK 2: Yahan 'sum' ke andar array[i] ko plus karte jayen ---
        int sum = sum  + array[i];
    }
    
    cout << "Saare numbers ka total sum = " << sum << endl;
}

int main() 
{
    int size;
    cout << "ENTER SIZE OF ARRAY = ";
    cin >> size;


    int* number = new int[size]; 

    cout << "ENTER THE NUMBERS = " << endl;
    for(int i = 0; i < size; i++) 
    {
        cin >> number[i];
    }

    delete[] number; 

    return 0;
}