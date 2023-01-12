/*Write functions using function overloading to add two numbers having different data 
types.*/

#include <iostream>
using namespace std;
int add(int a, int b);

double add(double a, double b);

string add(string a, string b);

int main() 
{
    cout<< "Sum of two integers : " << add(10, 20) <<endl;
    cout << "Sum of two real numbers : " << add(1.5, 2.3)<<endl;
    cout << "Concatenation of two strings : " << add("Hello ", "World") <<endl;
    return 0;
}

int add(int a, int b) 
{
    return a + b;
}

double add(double a, double b) 
{
    return a + b;
}

string add(string a, string b) 
{
    return a + b;
}
