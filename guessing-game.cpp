/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream> 
using namespace std; 
int main (void) 
{     
    int searched = 5;  
    int given; 

    cout << "This is simple guessing game:" << endl;
    cout << "Please enter a number:" << endl;

    while (searched != given) {
        cin >> given;  

        cout << "Incorrect." << endl;  
    }
cout << "You found the correct number. Good bye." << endl;
return 0;
}
