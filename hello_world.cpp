#include <iostream>
#include <string>

int main() {
    // Запрос имени пользователя у оператора
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name; // Считывание введенного имени

    // Вывод персонализированного приветствия в консоль
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
