#include <bits/stdc++.h>
using namespace std;

class Calculator {
public:
    double num1, num2;
    string oper;

    Calculator(double x, double y, string op) {
        num1 = x;
        num2 = y;
        oper = op;
    }

    void calculate() {
        if (oper == "add") {
            cout << "Result: " << num1 + num2 << endl;
        } else if (oper == "subtract") {
            cout << "Result: " << num1 - num2 << endl;
        } else if (oper == "multiply") {
            cout << "Result: " << num1 * num2 << endl;
        } else if (oper == "divide") {
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero" << endl;
            }
        } else {
            cout << "Error: Invalid operation" << endl;
        }
    }
};

int main() {
    double val1, val2;
    string userOp;

    cout << "Enter a: ";
    cin >> val1;

    cout << "Enter b: ";
    cin >> val2;

    cout << "Enter operation (add, subtract, multiply, divide): ";
    cin >> userOp;

    Calculator calc(val1, val2, userOp);
    calc.calculate();

    return 0;
}
