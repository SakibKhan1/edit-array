/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 C
This program will use arrays to make an array and gives user the interface to edit any of its elements.
*/
#include <iostream>
using namespace std;

int main()
{
    int myData[10];
    //creates array
    for (int i = 0; i < 10; i++){
        myData[i] = 1;
    }
    do {
    //do while loop
        int indx;
        int v;
        for (int i = 0; i < 10; i++)
            cout << myData[i] << " ";
        cout << endl;

        cout << "Enter index ";
        cin >> indx;
        cout << "Enter a value";
        cin >> v;

        if (indx >= 0 and indx < 10) myData[indx] = v;
        else break;
    }while (true);

    return 0;
}
