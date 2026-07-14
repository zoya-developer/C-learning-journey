
#include <iostream>
using namespace std;

int main() {
    int rows = 4;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop for printing stars in each row
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        // After printing stars for the row, move to the next line
        cout << endl; 
    }

    return 0;
}
