/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
   std::cout << "Give reading in Celsius. ";
   double numC;
   std::cin >> numC;
   
   double numF = (numC * 9.0/5.0) + 32;
   std::cout << "The reading in Fahrenheit is " << numF << " degrees Fahrenheit" << std::endl;
   
   return 0;
}