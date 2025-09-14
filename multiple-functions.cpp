/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int Add(int a, int b); // This is our function prototype

int main()
{   
    int x = 2;
    int y = 3;
    int z = Add(x,y);
    std::cout << "The sum of x and y is " << z <<std::endl;
    return 0;
}

int Add(int a, int b){
    int c = a + b;
    return c;
}

int power(int x, int y)
{
    int x = 2, y = 3, z;
    z = pow(x,y);
    printf("The value of x^y is %d",z);

    return 0;
}
