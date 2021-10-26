#include <iostream>
#include <string>
#include <random>

int main(){
    std::random_device rd;   
    std::mt19937 rng(rd());    
    std::uniform_int_distribution<int> uni(1,100); 

    int random_integer = uni(rng);

    while(true){
        int guess;
        std::cin >> guess;
        if(guess == random_integer){
            std::cout << "Just right!";
            break;
        } else if(guess < random_integer){
            std::cout << "Too small!" << '\n';
        } else{
            std::cout << "Too big!" << '\n';
        }
    }
    return 0;
}
