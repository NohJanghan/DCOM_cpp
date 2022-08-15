//5. Convert Fahrenheit value received from the user into Celsius value and print it
#include <iostream>

int main() {
    double fahrenheit = 0;
    std::cout << "Please enter Fahrenheit Value : ";
    std::cin >> fahrenheit;
    std::cout << "Celsius value is " << (fahrenheit -32)/ 9 * 5 << std::endl;

    return 0;
}
