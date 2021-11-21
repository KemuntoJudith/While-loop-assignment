// While loop assignment
//Admission: 147683

#include <iostream>
using namespace std; 

//Using the while loop, write a C++ program that outputs the numbers: 12,14,16,18,20,22,24,26,28
//The program will output numbers between 11 and 29 that are divisible by 2

int main()
{
    //Variable declaration
    int counter = 11;  
    while (counter<29)
    {
        if (counter % 2 == 0)
            cout << counter<< "\n";
        counter++; //This is to stop the code from running once the conditions are met
        {

        }
    }
    return 0; 
}

