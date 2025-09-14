/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

int sum(int k) {
    if (k>0) {
        return k + sum(k-1);
    } else {
        return 0;
    }
}
******************************************************************************/

#include <iostream>

long long factorial(long long l) {
    if (l > 1) {
        return l*factorial(l-1);
    } else {
        return 1;
    }
}

int main() {
    long long int num;
    std::cout <<  "Enter the number: ";
    std::cin >> num;
    
     if (num < 0) {
        std::cout << "Factorial of a negative number is not defined." << std::endl;
    } else {
        std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;
    }

    int fac= factorial(num);
    std::cout << fac << std::endl;
    return 0;
}
