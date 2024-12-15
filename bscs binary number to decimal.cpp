#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int length = binary.length();
    
    for(int i = 0; i < length; i++) {
        if(binary[length - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    
    return decimal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    int decimal = binaryToDecimal(binary);
    cout << "The decimal equivalent is: " << decimal << endl;
    
    return 0;
}
