#include <iostream>
// replacement of if/else statement
int main()
{
    // int marks;
    // std::cout << "Enter your marks: ";
    // std::cin >> marks;

    // marks >= 75 ? std::cout << "You passed!" : std::cout << "You failed!\n";

    int no;
    std::cout << "Enter a number to check if it is even or odd : ";
    std::cin >> no;

    no % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";
    return 0;
}