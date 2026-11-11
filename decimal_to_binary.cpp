#include <iostream>
#include <cmath>
using namespace std;

// With Pow And Round Function
int decimalToBinary(int dec)
{
    int reminder, binarynumber = 0, i = 0;
    while (dec > 0)
    {
        reminder = dec % 2;
        dec = dec / 2;
        binarynumber = binarynumber + (reminder * round(pow(10, i)));
        i++;
    }
    return binarynumber;
}

// With Out Pow And Round Function
// int decimalToBinary(int dec)
// {
//     int reminder, binarynumber = 0, power = 1;
//     while (dec > 0)
//     {
//         reminder = dec % 2;
//         dec = dec / 2;
//         binarynumber = binarynumber + (reminder * power);
//         power *= 10;
//     }
//     return binarynumber;
// } 


int main()
{
    int number;
    cout << "Enter Your Decimal Number :- ";
    cin >> number;
    cout << "Decimal to Binary Conversion :- \n( " << number << " )10 = ( " << decimalToBinary(number) << " )2.\n";
    return 0;
}