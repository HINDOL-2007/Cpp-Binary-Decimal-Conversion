#include <iostream>
#include<cmath>
using namespace std;

// With Pow And Round Function
int binaryToDecimal(int binary)
{
    int reminder, decimalnumber = 0, i = 0;
    while (binary > 0)
    {
        reminder = binary % 10;
        binary = binary / 10;
        decimalnumber = decimalnumber + (reminder * round(pow(2, i)));
        i++;
    }
    return decimalnumber;
}


// With Out Pow And Round Function
// int binaryToDecimal(int binary)
// {
//     int reminder, decimalnumber = 0, power = 1;
//     while (binary > 0)
//     {
//         reminder = binary % 10;
//         binary = binary / 10;
//         decimalnumber = decimalnumber + (reminder * power);
//         power *= 2;
//     }
//     return decimalnumber;
// } 

int main(){
    int number;
    cout << "Enter Your Binary Number :- ";
    cin >> number;
    cout << "Binary to Decimal Conversion :- \n( " << number << " )2 = ( " << binaryToDecimal(number) << " )10.\n";
    return 0;
}