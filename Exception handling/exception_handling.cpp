#include <iostream>  //* Include necessary header for input/output
#include <conio.h>   //* Include necessary header for getch() function
using namespace std;

int main() {
    int number_1, number_2;  //* Declare variables for input numbers
    double division;         //* Declare variable for division result

    do {
        try {
            cout << "Enter the first number: ";  //* Prompt user for input
            cin >> number_1;                    //* Read the first number
            cout << endl << "Enter the second number: ";  //* Prompt user for input
            cin >> number_2;                    //* Read the second number

            if (number_2 == 0) {
                throw -1;  //* Throw an exception if the second number is zero
            }

            division = (double)number_1 / number_2;  //* Calculate the division
            cout << endl << "Division = " << division << endl;  //* Display the result
        } catch (int throwing_problem) {
            cout << "Divide by zero isn't possible!" << endl;  //* Handle the exception
            cout << "Please try again!" << endl;
        }
    } while (number_2 == 0);  //* Repeat until a non-zero second number is entered

    getch();  //* Wait for a key press before exiting
}
