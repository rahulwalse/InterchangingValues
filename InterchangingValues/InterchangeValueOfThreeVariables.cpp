/*
    Implementation for exchanging values in order: a->b->c->a. The arrows indicate that b is to assume value of a,
    c value of b and so on.
*/

#include<iostream>
using namespace std;

void InterchangeValueOfThreeVariables()
{
    /*Declaring the variables required.*/
    int first_num, second_num, third_num, temp;
    char conti;

    do
    {
        cout << "\nPlease provide the values for a, b and c in order to perform following exchange\na --> b --> c --> a*";
        cout << "\n*Arrows indicate that b is to assume value of a, c value of b and so on." << endl;

        /*Read the values of all three variables to be interchanged.*/
        cout << "\nEnter the value of a:";  cin >> first_num;
        cout << "Enter the value of b:";    cin >> second_num;
        cout << "Enter the value of c:";    cin >> third_num;

        /*Check if the values of all three variables are same, if they are same there will be no exchange.*/
        if (first_num == second_num && first_num == third_num)
        {
            cout << "\nThe values of a, b and c are same, hence no need of exchanging the values." << endl;
        }

        else
        {
            /*Displaying the values of the variables a, b and c before exchanging the values.*/
            cout << "\nThe values before the exchange are: a=" << first_num << ", b=" << second_num << " and c=" << third_num << endl;

            /*Exchanging mechanism for interchaning the values of a, b and c using a temporary variable "temp".*/
            temp = first_num;
            first_num = third_num;
            third_num = second_num;
            second_num = temp;

            /*Displaying the values of the variables a, b and c after exchanging the values.*/
            cout << "\nThe values after the exchange (a --> b --> c --> a) are: a=" << first_num << ", b=" << second_num << " and c=" << third_num << endl;
        }

        cout << "\nWant to exchange values of a, b and c in a --> b --> c --> a order with different values again? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' || conti == 'y');
}