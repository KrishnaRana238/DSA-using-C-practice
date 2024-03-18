#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Function to simplify a number to a single digit
int simplifyToSingleDigit(int num) {
    while (num > 9) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

// Function to convert a digit to its word representation
string digitToWord(int digit) {
    string words[] = {"", "one", "two", "thr", "fou", "fiv", "six", "sev", "eig", "nin"};
    return words[digit];
}

// Function to generate the password
string generatePassword(double num, string name) {
    string password;

    // Convert number to scientific notation
    string scientificNotation = to_string(num);
    size_t ePos = scientificNotation.find('e');
    if (ePos == string::npos) {
        return "Invalid input";
    }

    string mantissaStr = scientificNotation.substr(0, ePos);
    int exponent = stoi(scientificNotation.substr(ePos + 1));

    // Handling negative numbers
    bool isNegative = false;
    if (mantissaStr[0] == '-') {
        isNegative = true;
        mantissaStr = mantissaStr.substr(1);
    }

    // Convert mantissa to a single digit
    double mantissa = stod(mantissaStr);
    mantissa = abs(mantissa);
    int mantissaInt = mantissa;
    while (mantissaInt > 9) {
        int sum = 0;
        while (mantissaInt > 0) {
            sum += mantissaInt % 10;
            mantissaInt /= 10;
        }
        mantissaInt = sum;
    }

    // Simplify exponent to a single digit
    exponent = simplifyToSingleDigit(abs(exponent));

    // Get S1 by converting mantissa and exponent to digit strings
    string S1 = digitToWord(mantissaInt) + "."
                + digitToWord(exponent / 10) + "-"
                + digitToWord(exponent % 10);

    // Get S2 based on whether the exponent is odd or even
    string S2 = "";
    if (exponent % 2 != 0) {
        for (int i = 0; i < name.length(); i++) {
            if ((i + 1) % 2 != 0) {
                S2 += name[i];
            }
        }
    } else {
        for (int i = 0; i < name.length(); i++) {
            if ((i + 1) % 2 == 0) {
                S2 += name[i];
            }
        }
    }

    // Concatenate S1 and S2 to form the password
    password = S1 + "@" + S2;
    return password;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        double num;
        string name;
        cin >> num >> name;

        string password = generatePassword(num, name);
        cout << password << endl;
    }

    return 0;
}
