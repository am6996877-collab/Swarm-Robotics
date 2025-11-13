
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char operation; 

    cout << "Welcome to the Simple Calculator!" << endl;
    cout << "----------------------------------" << endl;

    
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    cout << "----------------------------------" << endl;

    
    switch (operation) {
    case '+': 
        cout << a << " + " << b << " = " << a + b << endl;
        break;

    case '-': 
        cout << a << " - " << b << " = " << a - b << endl;
        break;

    case '*': 
        cout << a << " * " << b << " = " << a * b << endl;
        break;

    case '/': 
        if (b != 0) {
            
            cout << a << " / " << b << " = " << (double)a / b << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;

    default: 
        cout << "Error: Invalid operation selected." << endl;
        break;
    }

    return 0;
}
        
