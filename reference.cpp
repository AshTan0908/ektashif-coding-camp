/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void modifyByValue(int num) { // Pass by value
  num *= 2; // Modify the copy of num
}

void modifyByReference(int& refNum) { // Pass by reference
  refNum *= 2; // Modify the original variable through the reference
}

int main() {
  int x = 5;
  int y = 10;

  cout << "x before modifyByValue: " << x << endl;
  modifyByValue(x); // Pass x by value (copy)
  cout << "x after modifyByValue: " << x << endl; // x remains unchanged

  cout << "y before modifyByReference: " << y << endl;
  modifyByReference(y); // Pass y by reference (alias)
  cout << "y after modifyByReference: " << y << endl; // y is modified

  return 0;
}
