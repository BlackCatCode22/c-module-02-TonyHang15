#include <iostream>

int getAnIntFromTheUser() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    return num;
}

int compareTwoInts(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int sumTwoInts(int a, int b) {
    return a + b;
}

int main() {
    int num1 = getAnIntFromTheUser(); 
    int num2 = getAnIntFromTheUser();  
    
    std::cout << "Larger number: " << compareTwoInts(num1, num2) << std::endl;
    std::cout << "Sum: " << sumTwoInts(num1, num2) << std::endl;

    return 0;
}
