// Define a function to find the highest value digit in a given number.


#include <iostream>
using namespace std;
int highestValueDigit(int num);
int main() 
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int highest = highestValueDigit(num);
    cout << "The highest value digit in " << num << " is " << highest << endl;
    return 0;
}
int highestValueDigit(int num) 
{
    int highest = 0;
    while (num > 0) 
    {
        int digit = num % 10;
        if (digit > highest) 
        {
            highest = digit;
        }
        num /= 10;
    }
    return highest;
}

