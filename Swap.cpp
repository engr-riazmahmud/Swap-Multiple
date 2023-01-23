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

    // How to swap There Numbers

    int Num1, Num2, Num3, temp, sum;

    cout << "Enter First Number: ";
    cin >> Num1;
    cout << "Enter Second Number: ";
    cin >> Num2;
    cout << "Enter Third Number: ";
    cin >> Num3;

    // swap Number
    temp = Num1;
    Num1 = Num2;
    Num2 = Num3;
    Num3 = temp;

    sum = Num1 + Num2 + Num3;

    cout << "After Swapping";
    cout << "Enter your First Number: " << Num1 << endl;
    cout << "Enter your Second Number: " << Num2 << endl;
    cout << "Enter your Third Number: " << Num3 << endl;
    cout << "Sum of Three Numbers: " << sum << endl;

    return 0;
}