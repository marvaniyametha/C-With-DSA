// develop a menu-driven program to implement arethmetic such as +,-,*, /,and % using udf ,switch case, and looping .
// make sure that the program is endless until a certain
// letter is pressed.


#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b != 0)
        return a / b;
    else
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int mod(int a, int b)
{
    if (b != 0)
        return a % b;
    else
    {
        cout << "Error: Modulo by zero!" << endl;
        return 0;
    }
}

int main()
{
    int choice, a, b;
    do
    {
        cout << "Press 1 for + (Addition)" << endl;
        cout << "Press 2 for - (Subtraction)" << endl;
        cout << "Press 3 for * (Multiplication)" << endl;
        cout << "Press 4 for / (Division)" << endl;
        cout << "Press 5 for % (Modulo)" << endl;
        cout << "Press 0 to Exit" << endl;

        cout << endl
             << "=========================" << endl
             << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl
             << "=========================" << endl
             << endl;

        if (choice == 0)
        {
            cout << "Exiting program. Thank you!" << endl;
        }
        switch (choice)
        {

        case 1:
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            cout << endl
                 << "=========================" << endl
                 << endl;
            cout << "Addition of " << a << " and " << b << " is " << add(a, b) << endl;  
            cout << endl
                 << "=========================" << endl
                 << endl;
            break;
        case 2:
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            cout << endl
                 << "=========================" << endl
                 << endl;
            cout << "Subtraction of " << a << " and " << b << " is " << subtract(a, b) << endl;
            cout << endl
                 << "=========================" << endl
                 << endl;
            break;
        case 3:
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            cout << endl
                 << "=========================" << endl
                 << endl;
            cout << "Multiplication of " << a << " and " << b << " is " << multiply(a, b) << endl;
            cout << endl
                 << "=========================" << endl
                 << endl;
            break;
        case 4:
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            cout << endl
                 << "=========================" << endl
                 << endl;
            cout << "Division of " << a << " and " << b << " is " << divide(a, b) << endl;
            cout << endl
                 << "=========================" << endl
                 << endl;
            break;
        case 5:
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            cout << endl
                 << "=========================" << endl
                 << endl;
            cout << "Modulo of " << a << " and " << b << " is " << mod(a, b) << endl;
            cout << endl
                 << "=========================" << endl
                 << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;

            cout << endl
                 << "=========================" << endl
                 << endl;
        }

    } while (choice != 0);

return 0;
}



// output:-

// Press 1 for + (Addition)
// Press 2 for - (Subtraction)
// Press 3 for * (Multiplication)
// Press 4 for / (Division)
// Press 5 for % (Modulo)
// Press 0 to Exit

// =========================

// Enter your choice: 1

// =========================

// Enter the first number: 1
// Enter the second number: 2

// =========================

// Addition of 1 and 2 is 3

// =========================

// Press 1 for + (Addition)
// Press 2 for - (Subtraction)
// Press 3 for * (Multiplication)
// Press 4 for / (Division)
// Press 5 for % (Modulo)
// Press 0 to Exit

// =========================

// Enter your choice: 0

// =========================

// Exiting program. Thank you!
// Invalid choice! Please try again.

// =========================


