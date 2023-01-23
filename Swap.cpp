#include <iostream>
using namespace std;

int main()
{
    //how to swap two numbers
    
    int num1, num2, temp, sum;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    sum = num1 + num2;
    cout << "After swapping: " << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    cout << "Sum of the two numbers: " << sum << endl;

    return 0;
}


