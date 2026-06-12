#include <iostream>
#include <string>

int main() {
    // Ask for username
std::string name;
std::cout << "Enter your name: ";
std::cin >> name; // Reading name

    // Вывод персонализированного приветствия в консоль
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
