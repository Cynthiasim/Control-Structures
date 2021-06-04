//  File name: main.cpp
//  Programmer: Cynthia Simon
//  Course: Prorgramming Fundamentals II (COSC 1337)
//  Professor: Isaac K. Gang
//  Institution: Texas A&M University-Commerce

//  Problem: Control Structures (Repition)
//  Due date: 3/10/19

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int multofthree = 0, multoffive = 0;
    
    cout << "Enter two integers:" << endl;
    cin >> num1 >> num2;
    
    if (num2 < num1)
    {
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }
    
    for(int j = num1; j <= num2; j++)
    {
        if (j % 3 == 0)
        {
            multofthree++;
        }
        if(j % 5 ==0)
        {
            multoffive++;
        }
    }
    cout << "The # of multiples of 3 between two integers: " << multofthree << endl;
    cout << "The # of multilpes of 5 between two integers: " << multoffive << endl;
    
return 0;
}

