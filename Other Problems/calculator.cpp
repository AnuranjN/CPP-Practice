// C++ program to create simple calculator

#include <iostream>
using namespace std;
  
int main()
{
    char op;
    float num1, num2;
    
    cin >> op;                                       // Enter operator i.e. +, -, *, /
  
    cin >> num1 >> num2;                             // Enter operands
  
    switch (op) {                                    // We use switch statement
          
        case '+':
            cout << num1 + num2;
            break;
          
        case '-':
            cout << num1 - num2;
            break;
          
        case '*':
            cout << num1 * num2;
            break;
          
        case '/':
            cout << num1 / num2;
            break;
          
        default:                                   // If any other input is given it will show error
            cout << "Error";
            break;
    } 
  
    return 0; 
}
