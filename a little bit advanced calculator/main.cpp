/* Basic Calculator terminal app */
#include <iostream>
#include <limits>
#include "calculator.hpp"

int main() {
    double math_equationa;
    double math_equationb;
    char operation;
    
    /* Operations */
    
    std::cout << "Enter the first number: ";
    std::cin >> math_equationa;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter the operator(+,-,*,/): ";
    std::cin >> operation;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter the second number: ";
    std::cin >> math_equationb;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    /* if the operator is invalid  */

    if (!isValidOperation(operation)) {
        std::cout << "Invalid Operator!" << std::endl;
        return 1;
    }

    /* if someone is dumb */

    if (operation == '/' && math_equationb == 0) {
        std::cout << "Error: Division by zero is NOT allowed!" << std::endl;
        return 1;
    }

    /* Result */

    double math_result = calculate(math_equationa, math_equationb, operation);
    std::cout << "Equals: " << math_result << std::endl;
    return 0;
}