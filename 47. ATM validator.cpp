#include <iostream>

using namespace std;

// Function to get the sum of the digits of a number
int getDigit(const int number) {
    // Return the sum of the digits of the number
    return number % 10 + (number / 10 % 10);
}

// Function to sum the digits at odd positions of the card number
int sumOddDigits(const string cardNumber) {
    int sum = 0;

    // Iterate through the digits of the card number from right to left, skipping every other digit (odd positions)
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        // Convert the character digit to its integer value and add it to the sum
        sum += cardNumber[i] - 48;
        //-48 kasi sa ASCII, pwede ding -'0'
    }

    return sum;
}

// Function to sum the digits at even positions of the card number
int sumEvenDigits(const string cardNumber) {
    int sum = 0;

    // Iterate through the digits of the card number from right to left, skipping every other digit (even positions)
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        // Double the digit, get its sum of digits, and add it to the total sum
        sum += getDigit((cardNumber[i] - 48) * 2);
        //-48 kasi sa ASCII
    }

    return sum;
}

int main() {
    string cardNumber;
    int result = 0;

    // Prompt the user to enter a credit card number
    cout << "Enter a credit card #: ";
    cin >> cardNumber;

    // Calculate the result by summing the even and odd positioned digits
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    // Check if the result is divisible by 10 to determine if the card number is valid
    if (result % 10 == 0) {
        cout << cardNumber << " is valid";
    } else {
        cout << cardNumber << " is not valid";
    }

    return 0;
}

//6011000990139424
