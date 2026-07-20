#include <iostream>
using namespace std;

// Function that take two  (parameters) 
void addNumbers(int a, int b) {
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
}

int main() {
    // first time values
    addNumbers(10, 20);
    
    // second time values
    addNumbers(45, 55);
    
    return 0;
}
