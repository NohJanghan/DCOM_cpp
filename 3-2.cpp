//2. Calculator
#include <iostream>
using namespace std;

int main() {
    
    double result = 0;
    int option = 1;
    do
    {   
        option = 1;
        cout << "Enter Two Variables: ";
        int a, b;
        cin >> a >> b;

        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit"<<endl;
        cout << "Select Operation: ";
        int operation = 0;
        cin >> operation;

        switch (operation)
        {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            if (b == 0)
                result = -1;
            else
                result = a / b;
            break;
        case 5:
            option = 0;
            break;
        default:
            option = 2;
            break;
        }

        if (option == 0)
            cout << "End the program" << endl;
        else if (option  == 2) {
            cout << "Wrong Input" << endl;
        }
        else {
            cout << "Result: " << result << endl;
        }
        cout << "------" << endl;
    } while (option > 0);
    
    return 0;
}