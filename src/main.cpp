#include <iostream>
#include <string>
#include <vector>

auto main() -> int {
    std::vector<std::string> msg{"Hello", "World"};

    for (const std::string& word : msg) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
