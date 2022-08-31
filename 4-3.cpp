// 3. sum
#include <iostream>
using namespace std;

int sum(int size, int arr[])
{
    int result = 0;
    for(int i = 0; i < size; ++i) {
        result += arr[i];
    }

    return result;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[100] = {0, };
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << sum(n, arr);

    return 0;
}