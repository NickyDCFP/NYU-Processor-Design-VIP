#include "name.hpp"

std::string get_name() {
    std::cout << "Please enter your name.\n";
    std::string name;
    std::cin >> name;
    return name;
}