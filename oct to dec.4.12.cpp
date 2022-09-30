#include <iostream>
using namespace std;

int octalToDecimal(int octal)
{
    int decimal = 0;
    int multiplier = 1;

    while (octal > 0)
    {
        int rightDigit = octal % 10;
        octal = octal / 10;
        decimal += rightDigit * multiplier;
        multiplier *= 8;
    }

    return decimal;
}

int main()
{
    int num;
    cout << "Enter the value in octal :" << endl;
    cin >> num;

    cout << "Decimal value : " << octalToDecimal(num) << endl;
}

