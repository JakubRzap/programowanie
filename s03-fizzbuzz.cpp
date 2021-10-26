#include <iostream>
#include <string>

int main(int argc, char* argv[]){
    if (argc == 0) {
        return 1;
    }
    
    int range = std::stoi(argv[1]);
    for (int i = 1; i <= range; i++){
        if((i % 3 == 0) && (i % 5 == 0)){
            std::cout << i << "FizzBuzz" << '\n';
        } else if(i % 3 == 0){
            std::cout << i << "Fizz" << '\n';
        } else if(i % 5 == 0) {
            std::cout << i << "Buzz" << '\n';
        } else{
            std::cout << i << '\n';
        }
    }
    return 0;
}
