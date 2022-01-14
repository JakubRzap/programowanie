#include <iostream>

#include <string>

int main(int argc, char * argv[]) {
  if (argc == 0) {
    return 1;
  }

  std::string password = std::string {
    argv[1]
  };
  while (true) {
    std::cout << "password: " << "\n";
    std::string conf_pass;
    std::cin >> conf_pass;
    if (conf_pass == password) {
      break;
    }
  }
  return 0;
}
