/*
    Implementation for exchanging values in order: a<--b<--c<--d<--a. The arrows indicate that a is to assume value of b,
    b value of c, c value of d and so on.
*/

#include <iostream>
using namespace std;

void InterchangeValueOfFourVariables()
{
    /*Declaring all the required variables.*/
    int first_num, second_num, third_num, fourth_num, temp;
    char conti;

    do
    {
        cout << "\nPlease provide the values of a, b, c and d in order to perform following exchange: a <-- b <-- c <-- d <-- a*";
        cout << "\n* Arrows indicate that a is to assume value of b, b value of c and so on." << endl;

        /*Read the values of all four variables to be interchanged.*/
        cout << "\nEnter the value for a:"; cin >> first_num;
        cout << "Enter the value for b:";   cin >> second_num;
        cout << "Enter the value for c:";   cin >> third_num;
        cout << "Enter the value for d:";   cin >> fourth_num;

        /*Check if the values of all four variables are same, if they are same there will be no exchange.*/
        if (first_num == second_num && first_num == third_num && first_num == fourth_num)
        {
            cout << "\nThe values of a, b, c and d are same, hence no need of exchanging the values." << endl;
        }

        else
        {
            /*Displaying the values of the variables a, b, c and d before exchanging the values.*/
            cout << "\nThe values before the exchange are: a=" << first_num << ", b=" << second_num << ", c=" << third_num << " and d=" << fourth_num << endl;

            /*Exchanging mechanism interchanging the values of a, b, c and d using a temporary variable "temp".*/
            temp = first_num;
            first_num = second_num;
            second_num = third_num;
            third_num = fourth_num;
            fourth_num = temp;

            /*Displaying the values of the variables a, b, c and d after exchanging the values.*/
            cout << "\nThe values after the exchange (a <-- b <-- c <-- d <-- a) are: a=" << first_num << ", b=" << second_num << ", c=" << third_num << " and d=" << fourth_num << endl;
        }

        cout << "\nWant to exchange values of a, b, c and d in a <-- b <-- c <-- d <-- a order with different values again? (Y/N) " << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}