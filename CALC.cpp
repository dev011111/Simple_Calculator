// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << "THE ADDITION OF TWO NUMBER IS:"<<num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout <<"THE SUBTRACTION OF TWO NUMBER IS:"<< num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout <<"THE MULTIPLICATION OF TWO NUMBER IS:"<< num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout <<"THE DIVISION OF TWO NUMBER IS:"<< num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}
