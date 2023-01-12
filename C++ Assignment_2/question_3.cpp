// Define a function to calculate x raised to the power y.

#include <iostream>
using namespace std;
double power(double x, int y);
int main() 
{
    double x;
    int y;
    cout << "Enter the base number x: ";
    cin >> x;
    cout << "Enter the power y: ";
    cin >> y;
    double result = power(x, y);
    cout << x << " raised to the power " << y << " is " << result << endl;
    return 0;
}
double power(double x, int y) 
{
    double result = 1;
    if (y == 0) 
    return result;
    for (int i = 0; i < y; i++) 
    {
        result *= x;
    }
    return result;
}


