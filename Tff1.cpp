#include <iostream>
using namespace std;

int calculateSum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a = 5, b = 3;
    cout << "Sum of " << a << " and " << b << " is: " << calculateSum(a, b) << endl;
    return 0;
}