#include <iostream>
using namespace std;

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