/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int globalVar = 10; // Global variable, accessible throughout the program

void someFunction() {
  int localVar = 5; // Local variable, only accessible within this function

  static int staticVar = 0; // Static local variable

  cout << "Local variable: " << localVar << endl;
  cout << "Global variable: " << globalVar << endl;
  cout << "Static local variable: " << staticVar << endl;

  localVar = 15; // Modifying local variable
  staticVar++; // Modifying static local variable

  cout << "Local variable after modification: " << localVar << endl;
  cout << "Static local variable after modification: " << staticVar << endl;
}

int main() {
  someFunction(); // Call the function

  cout << "Global variable after function call: " << globalVar << endl;

  someFunction(); // Call the function again

  return 0;
}
