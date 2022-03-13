#include <iostream>

int main() {
    std::string surnames[10];
    std::cout << "Input the surnames: " << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> surnames[i];
    }
    int num;
    for (int i = 0; i < 3; i++) {
        std::cout << "Input the number of flat: " << std::endl;
        std::cin >> num;
        if (num > 10 || num < 1) {
            std::cout << "Incorrect number!" << std::endl;
        } else {
            num -= 1;
            std::cout << surnames[num] << std::endl;
        }
    }
    return 0;
}
