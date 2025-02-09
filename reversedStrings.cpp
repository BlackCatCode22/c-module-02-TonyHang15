#include <iostream>
#include <string>

int main() 
    {
    std::string input;

    std::cout << "Enter a string: ";
    std::cin >> input;

    int length = input.length();
    for (int i = 0; i < length / 2; ++i) {
        std::swap(input[i], input[length - i - 1]);
    }

    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}
