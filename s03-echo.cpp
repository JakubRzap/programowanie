#include <iostream>
#include <string>

int main(int argc, char* argv[]){
    if (argc == 0) {
        return 1;
    }
    if (argv[1] == std::string("-n")){
        for (int i = 2; i <= argc; i++){
            std::cout << argv[i] << " ";
        }
        std::cout << '\n';
    } else if (argv[1] == std::string("-l")){
        for (int i = 2; i <= argc; i++){
            std::cout << argv[i] << '\n';
        }
    } else if (argv[1] == std::string("-r")){
        if (argv[2] == std::string("-n")){
            for (int i = argc - 1; i > 2; i--){
                std::cout << argv[i] << " ";
            }
            std::cout << '\n';
        } else if (argv[2] == std::string("-l")){
            for (int i = argc - 1; i > 2; i--){
                std::cout << argv[i] << '\n';
            }
        } else {
            for (int i = argc - 1; i > 1; i--){
                std::cout << argv[i] << "\n";
            }
        }
    }
    return 0;
}
