#include <iostream>
#include <string>
#include <unordered_map>

std::string convertString(const std::string& input) {
    std::unordered_map<char, int> charCountMap;
    std::string output;

    for (const char& c : input) {
        charCountMap[tolower(c)]++;
    }

    for (const char& c : input) {
        if (charCountMap[tolower(c)] > 1) {
            output += ')';
        }
        else {
            output += '(';
        }
    }

    return output;
}

int main() {
    std::string input;

    // Запрос ввода строкиs
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    // Преобразование строки
    std::string output = convertString(input);

    std::cout << "Результат преобразования: " << output << std::endl;

    return 0;
}