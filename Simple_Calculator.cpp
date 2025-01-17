#include <iostream>

int main()
{
    char symbol;
    double number1;
    double number2;
    double result;

    std::cout << "Enter #1: ";
    std::cin >> number1;

    std::cout << "Enter #2: ";
    std::cin >> number2;

    std::cout << "Please enter a operator ( +, -, *, / ) : ";
    std::cin >> symbol;

    switch(symbol){
        case '+':
            std::cout << number1 + number2;
            break;
        case '-':
            std::cout << number1 - number2;
            break;
        case '*':
            std::cout << number1 * number2;
            break;
        case '/':
            std::cout << number1 / number2;
            break;
        default:
        std::cout << "Please enter in (+, -, *, /) only!";
    }

    return 0;
}