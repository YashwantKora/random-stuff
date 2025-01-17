#include <iostream>
int main()
{
    double temp;
    char unit;

    std::cout <<  "Please select the temperature type you want to convert to(F, C): \n";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n";
    }

    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else{
        std::cout << "Invalid input. Please enter 'F' or 'C' only.\n";
    }
    return 0;
}