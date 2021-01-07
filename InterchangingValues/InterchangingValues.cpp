// InterchangingValues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Program for interchanging values.

#include <iostream>
using namespace std;
const int FirstChoice = 1, LastChoice = 4;

void InterchangeValueUsingTemporaryVariable();
void InterchangeValueOfThreeVariables();
void InterchangeValueOfFourVariables();
void InterchangeValueWithoutUsingTemporaryVariable();


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
        if (choice < FirstChoice or choice > LastChoice)
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

//Implementation for interchanging values of two variables using a temporary variable.
void InterchangeValueUsingTemporaryVariable()
{
    //Declaring variables store the values.
    int first_num, second_num, temp;    char conti;

    do
    {
        cout << "\nPlease provide values for two variables a and b to be interchanged" << endl;

        //Reading the values of two variables from the user.
        cout << "Enter the value of a: ";   cin >> first_num;
        cout << "Enter the value of b: ";   cin >> second_num;

        //Checking if the values of two numbers are same, if they are same, no need to interchange.
        if (first_num == second_num)
        {
            cout << "\nThe values of a and b are same, hence no need of interchanging the values." << endl;
        }

        else
        {
            //Displaying the values before they are interchanged.
            cout << "\nValues of a and b before interchanging are: a=" << first_num << " and b=" << second_num << endl;

            //Interchanging the values of two variables using a temporary variable "temp".
            temp = first_num;
            first_num = second_num;
            second_num = temp;

            //Displaying the values after the interchange.
            cout << "\nValues of a and b after interchanging are: a=" << first_num << " and b=" << second_num << endl;
        }

        cout << "\nWant to interchange values of two numbers with different values again? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}

//Implementation for exchanging values in order: a->b->c->a. The arrows indicate that b is to assume value of a, c value of a and so on.
void InterchangeValueOfThreeVariables()
{
    //Declaring the variables required.
    int first_num, second_num, third_num, temp;
    char conti;

    do
    {
        cout << "\nPlease provide the values for a, b and c in order to perform following exchange\na --> b --> c --> a*";
        cout << "\n*Arrows indicate that b is to assume value of a, c the value of a and so on." << endl;

        //Reading the values of all the three variables.
        cout << "\nEnter the value of a:";  cin >> first_num;
        cout << "Enter the value of b:";    cin >> second_num;
        cout << "Enter the value of c:";    cin >> third_num;

        //Checking if the values of all three variables are same, if they are same there will be no exchange.
        if (first_num == second_num && first_num == third_num)
        {
            cout << "\nThe values of a, b and c are same, hence no need of exchanging the values." << endl;
        }

        else
        {
            //Displaying the values of the variables a, b and c before exchanging the values.
            cout << "\nThe values before the exchange are: a=" << first_num << ", b=" << second_num << " and c=" << third_num << endl;

            //Exchanging the values of a, b and c using a temporary variable "temp".
            temp = first_num;
            first_num = third_num;
            third_num = second_num;
            second_num = temp;

            //Displaying the values of the variables a, b and c after exchanging the values.
            cout << "\nThe values after the exchange (a --> b --> c --> a) are: a=" << first_num << ", b=" << second_num << " and c=" << third_num << endl;
        }

        cout << "\nWant to exchange values of a, b and c in a --> b --> c --> a order with different values again? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}

//Implementation for exchanging values in order: a<--b<--c<--d<--a. The arrows indicate that a is to assume value of a, b value of c and so on.
void InterchangeValueOfFourVariables()
{
    //Declaring all the required variables.
    int first_num, second_num, third_num, fourth_num, temp;
    char conti;

    do
    {
        cout << "\nPlease provide the values of a, b, c and d in order to perform following exchange: a <-- b <-- c <-- d <-- a*\n*Arrows indicate that a is to assume value of b, b value of c and so on." << endl;

        //Reading the values of all four the variables.
        cout << "\nEnter the value for a:"; cin >> first_num;
        cout << "Enter the value for b:";   cin >> second_num;
        cout << "Enter the value for c:";   cin >> third_num;
        cout << "Enter the value for d:";   cin >> fourth_num;

        //Checking if the values of all four variables are same, if they are same there will be no exchange.
        if (first_num == second_num and first_num == third_num and first_num == fourth_num)
        {
            cout << "\nThe values of a, b, c and d are same, hence no need of exchanging the values." << endl;
        }

        else
        {
            //Displaying the values of the variables a, b, c and d before exchanging the values.
            cout << "\nThe values before the exchange are: a=" << first_num << ", b=" << second_num << ", c=" << third_num << " and d=" << fourth_num << endl;

            //Exchanging the values of a, b, c and d using a temporary variable "temp".
            temp = first_num;
            first_num = second_num;
            second_num = third_num;
            third_num = fourth_num;
            fourth_num = temp;

            //Displaying the values of the variables a, b, c and d after exchanging the values.
            cout << "\nThe values after the exchange (a <-- b <-- c <-- d <-- a) are: a=" << first_num << ", b=" << second_num << ", c=" << third_num << " and d=" << fourth_num << endl;
        }

        cout << "\nWant to exchange values of a, b, c and d in a <-- b <-- c <-- d <-- a order with different values again? (Y/N) " << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}

//Implementation for interchanging values of two numbers without using a temporary variable.
void InterchangeValueWithoutUsingTemporaryVariable()
{
    //Declaring all the variables required.
    int first_num, second_num;
    char conti;

    do
    {
        cout << "\nPlease provide the values for two variables a and b to be interchanged" << endl;

        //Read the values of two variables to be interchanged.
        cout << "\nEnter the value of a: "; cin >> first_num;
        cout << "\nEnter the value of b: "; cin >> second_num;

        //Checking if the values of two variables are same. If they are same, then no need to interchange.
        if (first_num == second_num)
        {
            cout << "\nThe values of a and b are same, hence no need to interchange the values." << endl;
        }

        else
        {
            //Displaying the values before they are interchanged.
            cout << "\nThe values before the interchange are: a=" << first_num << " and b=" << second_num << endl;


            //Interchanging the values of two variables without using a temporary variable.
            first_num = first_num - second_num;
            second_num = first_num + second_num;
            first_num = second_num - first_num;

            //Displaying the values after ther are interchanged.
            cout << "\nThe values after the interchange are: a=" << first_num << " and b=" << second_num << endl;
        }

        cout << "\nWant to interchange values of two numbers (without using a temporary variable) with different values again? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}