#include <iostream>
using namespace std;

int main() {
    double num1, num2;  // Variables to store the numbers for calculation
    char operation, choice;  // Variables to store the chosen operation and user's choice to continue

    do {
        // Welcome message for the User
        cout << "Welcome to Simple Calculator!!" << endl;

        // Prompting user to enter two numbers
        cout << "\nEnter Two Numbers: ";
        cin >> num1 >> num2;

        // Prompting user to enter the desired operation
        cout << "Enter Operator (+,-,*,/): ";
        cin >> operation;

        // Perform the calculation based on the chosen operation
        switch(operation) {
            case '+': 
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;

            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;

            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;

            case '/':
                if(num2 != 0) {  // Check to avoid division by zero

                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

                } else {
                    
                    cout << "Error! Divisor is Zero.\n";  // Error message for division by zero
                }
                break;

            default:
                cout << "Invalid Operator! Please Select from (+,-,*,/)." << endl;  // Error message for invalid operator
        }
        
        // Ask the user if they want to perform another calculation
        cout << "Do you want to do more calculations? (y/n): ";
        cin >> choice;

        // Print a separator line if the user wants to continue
        if (choice == 'y' || choice == 'Y') {
            cout << "----------------------------------------------" << endl;
        }

    } while(choice == 'y' || choice == 'Y');  // Continue the loop if the user chooses 'y' or 'Y'

    // Thank you message at the end of the program
    cout << "\n----------------- Thank You! -----------------" << endl;

    return 0;
}