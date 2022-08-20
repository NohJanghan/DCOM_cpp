//3. 99dan
#include <iostream>
using namespace std;


int main() {
    int input = 1;
    while(input) {
        cout << "input: ";
        cin >> input;

        if(input == 0) {
            cout << "Exit";
            return 0;
        }
        while(input < 0 || input > 9) {
            cout << "input again:";
            cin >> input;
        }

        for (int i = 1; i <= 9; i++)
        {
            cout << input << '*' << i << '=' << i * input << endl;
        }
        cout << " --- " << endl;
        
    }
}