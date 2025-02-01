#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = rand() % 100 + 1;
    do{
        std::cout << "Enter a guess: ";
        std::cin >> guess;
        tries ++ ;
        if (guess > num){
            std::cout << "Too high!\n";
        }
        else if (guess < num){
            std::cout << "Too Low!\n";
        }
        else{
            std::cout << "You got it! The number was: " << num << '\n';
            std::cout << "It took you " << tries << " tries\n";
        }
    }while(num != guess);
    return 0;
}