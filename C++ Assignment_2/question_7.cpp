//Write a function using the default argument that is able to add 2 or 3 numbers.



#include <iostream>
using namespace std;
int add(int a, int b, int c=0) 
{
    return a + b + c;
}

int main() 
{
    cout<< "Sum of 2 numbers: " << add(1, 2) << std::endl;
    cout<< "Sum of 3 numbers: " << add(1, 2, 3) << std::endl;
    return 0;
}
