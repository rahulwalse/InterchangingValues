/*
    Implementation for interchanging values of two numbers without using a temporary variable.
*/

#include <iostream>
using namespace std;

void InterchangeWithoutUsingTemporaryVariable()
{
    /*Declaring all the variables required.*/
    int first_num, second_num;
    char conti;

    do
    {
        cout << "\nPlease provide the values for two variables a and b to be interchanged" << endl;

        /*Read the values of two variables to be interchanged.*/
        cout << "\nEnter the value of a: "; cin >> first_num;
        cout << "\nEnter the value of b: "; cin >> second_num;

        /*Checking if the values of two variables are same, if they are same, no need to interchange.*/
        if (first_num == second_num)
        {
            cout << "\nThe values of a and b are same, hence no need to interchange the values." << endl;
        }

        else
        {
            /*Displaying the values before they are interchanged.*/
            cout << "\nThe values before the interchange are: a=" << first_num << " and b=" << second_num << endl;


            /*Exchanging mechanism for interchanging the values of two variables without using a temporary variable.*/
            first_num = first_num - second_num;
            second_num = first_num + second_num;
            first_num = second_num - first_num;

            /*Displaying the values after ther are interchanged.*/
            cout << "\nThe values after the interchange are: a=" << first_num << " and b=" << second_num << endl;
        }

        cout << "\nWant to interchange values of two numbers (without using a temporary variable) with different values again? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' || conti == 'y');
}