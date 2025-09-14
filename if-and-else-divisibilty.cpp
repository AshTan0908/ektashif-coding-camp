#include <iostream>
using namespace std;

int main()
{
    int num;
    
    cin >> num;
    
    if (num %2 == 0){
        cout << "The number " << num << " is divisible by 2" << endl;
    } 
    else if (num % 3 == 0) {
       cout << "The number " << num << " is divisible by 3" << endl;
    }
    else if ((num%2 == 0)&&(num % 3 == 0)){
        cout << "The number " << num << " is divisible by both 2 and 3" << endl;
    } else {
        cout << "The number " << num << " is undivisible by 2 or 3" << endl;
    }
    return 0;
}