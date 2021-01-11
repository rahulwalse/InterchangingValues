/*InterchangingValues.cpp : This file contains the 'main' function. Program execution begins and ends there.*/
/*
    Program for interchanging values of variables using different methods and also using a specific sequence
    of exchange for the given number of variables. This program is an implementation in C++ of algorithm for
    interchanging the values from the book "How to Solve it by Computer" by R.G. Dromey.
*/

#include <iostream>
#include "InterchangeF.h"
using namespace std;
const int FIRSTCHOICE = 1, LASTCHOICE = 4;



int main()
{
    int choice; char conti;

    do
    {
        /*Providing user the selection of methods for exchanging the values.*/
        cout << "\nSelect any of the following methods of interchanging or exchanging values of numbers\n1. Interchanging values of two variables";
        cout << "\n2. Exchange in following order: a --> b --> c --> a\n3. Exchange in following order: a <-- b <-- c <-- d <-- a";
        cout << "\n4. Interchanging values of two variables(without using a temporary variable)\nEnter your choice : ";
        cin >> choice;

        /*Check if the option selected by the user is valid. If the selection is invalid the program will exit.*/
        if (choice < FIRSTCHOICE or choice > LASTCHOICE)
        {
            cout << "\nYour choice is invalid... exiting the program.";
            return 0;
        }

        /*The selection is valid, the program will continue.*/
        else
        {
            /*According to the choice, appropriate function is called.*/
            switch (choice)
            {
            case 1: InterchangeUsingTemporaryVariable();
                    break;
            case 2: InterchangeValueOfThreeVariables();
                    break;
            case 3: InterchangeValueOfFourVariables();
                    break;
            case 4: InterchangeWithoutUsingTemporaryVariable();
                    break;
            }
        }

        /*Check if the user wants to continue the exchange operation.*/
        cout << "\nDo you want to do a different exchange operation? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}