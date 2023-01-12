// Define a function to swap data of two int variables using call by reference


#include<iostream>
using namespace std;
void swap(int &x, int &y);
int main() 
{
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << " b = " << b <<endl;
    swap(a, b);
    cout << "After swap: a = " << a << " b = " << b <<endl;
    return 0;
}
void swap(int &x, int &y) 
{
    int temp = x;
    x = y;
    y = temp;
}
