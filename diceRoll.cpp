#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(NULL));
    int num = rand() % 6 + 1;
    int num1 = rand() % 6 + 1;
    std::cout << num << '\n';
    std::cout << num1;

    return 0;
}
