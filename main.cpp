// first cpp program

#include <iostream>

using namespace std;

double square(double x)
{
    return x * x;
}

void print_square(double x)
{
    cout << "the square of "<< x <<" is " << square(x) << "\n";
}

int main() 
{
    print_square(2);
    // cout << "Hello World! \n";
}

