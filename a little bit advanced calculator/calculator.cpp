#include "calculator.hpp"

bool isValidOperation(char operation) {
    return operation == '+' || operation == '-' ||
           operation == '*' || operation == '/';
}

double calculate(double a, double b, char operation) {
    switch(operation) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default: return 0; // This case should never be reached due to prior validation
    }
}