#include <iostream>
#include <string>

int main(int argc, char* argv[]){
    if (argc == 0) {
        return 1;
    }
    
    int number;
    std::cin >> number;
    for(int i = number; i >= 0; i--){
        std::cout << "" << i << "..." << '\n';
    }
    return 0;
}
