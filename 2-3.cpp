//3.
#include <iostream>

int main() {
    char str[6] = "Hello";
    
    for(int i = 0; str[i] != '\0'; i++) {
        std::cout << str[i];
    }

    return 0;
}
