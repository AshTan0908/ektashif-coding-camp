#include <iostream>

using namespace std;

int main() {
  int password = 1234; 
  int attempts = 0; 

  do {
    attempts++;

    cout << "Enter password (attempt " << attempts << "): ";
    int guess;
    cin >> guess; 

    if (guess == password) {
      cout << "Access granted!" << endl;
      break; 
    } else {
      if (attempts < 3) {
        cout << "Wrong password. Try again." << endl;
      } else {
        cout << "Too many attempts. Access denied." << endl;
      }
    }
  } while (attempts < 3);

  return 0;
}