#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main () {
    string food = "Pizza";
    string &meal = food;
    
    std::cout << meal << "\n";
    cout << food << "\n";
    cout << &food << "\n";
    
    return 0;
}