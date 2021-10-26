#include <iostream>

int main(int argc, char* argv[]){
    if (argc == 1){
        for(int i = 99; i > 0; i--){
            std::cout << i << " bottles of beer on the wall, " << i <<" bottles of beer.\n"
                "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall...\n";
        }
        std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n"
            "Go to the store and buy some more, 99 bottles of beer on the wall...\n";
    } else {
        for(int i = std::stoi(argv[1]); i > 0; i--){
            std::cout << i << " bottles of beer on the wall, " << i <<" bottles of beer.\n"
                "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall...\n";
        }
        std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n"
            "Go to the store and buy some more, 99 bottles of beer on the wall...\n";
    }
    return 0;
}
