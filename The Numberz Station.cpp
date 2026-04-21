////////////////////////////////////////////////////////
////////////    Calculator Program    /////////////////
//  Taylor Lindsey, William Bailey, Henry Harris    //
//////////////////// 4/19/26 ////////////////////////
//                                                 //
///////////  Input Number Operand Number   /////////
//////////   Num1 (+ - / *) Num2           ////////
/////////   Input: 2 num and operand       ///////
////////    Output: Calculation or Error   //////
////////////////////////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num1, num2;
    char op;
    char ch = 'y';
    cout << "Calculator Prime\n";


    while (ch == 'y' || ch == 'Y')
    {
        double result;

        cout << "Input problem: ";
        cin >> num1 >> op >> num2;

        if (op == '+')
            result = num1 + num2;
        else if (op == '-')
            result = num1 - num2;
        else if (op == '*')
            result = num1 * num2;
        else if (op == '/')
        {
            if (num2 == 0)
            {
                cout << "Error: Cannot divide 0\n\n";
                continue;
            }
            result = num1 / num2;
        }

        else
        {
            cout << "Letter or invalid operand detected.\n";
            continue;
        }
        cout << "Result: " << result << endl;
        cout << endl;

        cout << "Would you like to continue?(y/n): ";
        cin >> ch;
    }

    cout << "\nProgram ended!\n\n";
}

cout << "Git makes collaboration easy!" << endl; // comment
cout << "Taylor made a change";
