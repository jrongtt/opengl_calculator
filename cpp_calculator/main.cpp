#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calc;
    double x, y;
    char operation;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter one or two operands with a space: ";
    std::cin >> x >> y;

    switch (operation) {
        case '+':
            std::cout << "Result: " << calc.add(x, y) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << calc.subtract(x, y) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << calc.multiply(x, y) << std::endl;
            break;
        case '/':
            std::cout << "Result: " << calc.divide(x, y) << std::endl;
            break;
        default:
            std::cout << "Invalid operation!" << std::endl;
    }

    return 0;
}
