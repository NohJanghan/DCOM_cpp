//2. Put the integer 2147483628 in a variable and print it.
#include <iostream>

int main() {
    unsigned int number = 2147483648;

    std::cout << number << "  size:" << sizeof(int) <<  std::endl;
    return 0;
}
