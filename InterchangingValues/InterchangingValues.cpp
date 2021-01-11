// InterchangingValues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Program for interchanging values.

#include <iostream>
#include "InterchangeF.h"
using namespace std;
const int FIRSTCHOICE = 1, LASTCHOICE = 4;



int main()
{
    int choice; char conti;

    do
    {
        //Providing user the selection of methods for exchanging the values.
        cout << "\nSelect any of the following methods of interchanging or exchanging values of numbers\n1. Interchanging values of two variables\n2. Exchange in following order: a --> b --> c --> a";
        cout << "\n3. Exchange in following order: a <-- b <-- c <-- d <-- a\n4. Interchanging values of two variables (without using a temporary variable)\nEnter your choice: ";
        cin >> choice;

        //Checking if the option selected by the user is valid. If the selection is invalid the program will exit.
        if (choice < FIRSTCHOICE or choice > LASTCHOICE)
        {
            cout << "\nYour choice is invalid... exiting the program.";
            return 0;
        }

        //The selection is valid, the program will continue.
        else
        {
            switch (choice)
            {
            case 1: InterchangeValueUsingTemporaryVariable();
                break;
            case 2: InterchangeValueOfThreeVariables();
                break;
            case 3: InterchangeValueOfFourVariables();
                break;
            case 4: InterchangeValueWithoutUsingTemporaryVariable();
                break;
            }
        }

        //Check if the user wants to continue the exchange operation.
        cout << "\nDo you want to do a different exchange operation? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}