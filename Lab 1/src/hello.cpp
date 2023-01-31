#include <iostream>
#include "name.hpp"

int main() {
    std::cout << "Hello world!\n";
    std::string name = get_name();
    std::cout << "Hello, " << name << std::endl;
}