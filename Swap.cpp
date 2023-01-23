#include <iostream>
using namespace std;

int main()
{
    // How to swap two Numbers

    int num1, num2, temp, sum;

    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter second Number: ";
    cin >> num2;

    // swap The Number
    temp = num1;
    num1 = num2;
    num2 = temp;

    sum = num1 + num2;

    cout << "After Swapping" << endl;
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;
    cout << "Sum of the two Numbers: " << sum << endl;

    return 0;
}