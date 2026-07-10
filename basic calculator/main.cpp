#include <iostream>
#include <limits>

int main() {
    /* variables */
    double math_equationa;
    double math_equationb;
    double math_result;
    char operation;

    /* inputs */
    std::cout << "Enter the first number: ";
    std::cin >> math_equationa;
    
    /* ensure no enter or any keys are in the input buffer */
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    std::cout << "Enter the operator(+,-,*,/): ";
    std::cin >> operation;

    std::cout << "Enter the second number: ";
    std::cin >> math_equationb;
    
    /* if user types 0 in division*/
    if (operation == '/' && math_equationb == 0) {
        std::cout << "Error: Division by zero is not allowed!" << std::endl;
        return 1;
    }


    /* calculations */
    switch(operation) {
        case '+':
            math_result = math_equationa + math_equationb;
            break;
        case '-':
            math_result = math_equationa - math_equationb;
            break;
        case '*':
            math_result = math_equationa * math_equationb;
            break;
        case '/':
            math_result = math_equationa / math_equationb;
            break;
        default:
            std::cout << "Invalid operator!" << std::endl;
            return 1;
    }

    /* output */
    std::cout << "equals: " << math_result << std::endl;
    return 0;
}