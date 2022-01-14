#include <iostream>

#include <string>

auto main(int argc, char * argv[]) -> int {
  auto x = std::stoi(argv[1]);

  do {
    std::cout << x << "...\n";
    x -= 1;
  } while (x > 0);

  if (argc == 0) {
    std::cout << "ok\n";
  }
  return 0;
}
