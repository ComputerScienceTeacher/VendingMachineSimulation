#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to display the available items in the vending machine
void displayMenu() {
    cout << "========= Vending Machine Menu =========" << endl;
    cout << "1. Water        - $1.00" << endl;
    cout << "2. Soda         - $1.50" << endl;
    cout << "3. Chips        - $2.00" << endl;
    cout << "4. Chocolate    - $2.50" << endl;
    cout << "========================================" << endl;
}

// Function to get the user's choice of item
int getUserChoice() {
    int choice;
    cout << "Please select an item (1-4): ";
    cin >> choice;
    return choice;  // Return the user's choice
}

// Function to return the price based on user's item selection
double getPrice(int choice) {
    switch (choice) {
        case 1: return 1.00;
        case 2: return 1.50;
        case 3: return 2.00;
        case 4: return 2.50;
        default: return 0.0;  // Invalid choice returns price 0.0
    }
}

// Function to get the payment amount from the user
double getPayment() {
    double payment;
    cout << "Enter payment amount: $";
    cin >> payment;
    return payment;
}

// Function to check whether the user has paid enough
bool checkPayment(double price, double payment) {
    return payment >= price;
}

// Function to simulate dispensing the selected item
void dispenseItem(int choice) {
    switch (choice) {
        case 1: cout << "Dispensing Water..." << endl; break;
        case 2: cout << "Dispensing Soda..." << endl; break;
        case 3: cout << "Dispensing Chips..." << endl; break;
        case 4: cout << "Dispensing Chocolate..." << endl; break;
        default: cout << "Dispensing Unknown Item..." << endl; break;
    }
}

// Function to calculate and return change if necessary
void giveChange(double price, double payment) {
    double change = payment - price;
    if (change > 0) {
        cout << "Returning change: $" << fixed << setprecision(2) << change << endl;
    }
}

// The main function coordinates the vending machine operation
int main() {
    // Step 1: Show the menu
    displayMenu();

    // Step 2: Get user selection
    int choice = getUserChoice();

    // Step 3: Determine the price of the selected item
    double price = getPrice(choice);

    // Step 4: Ask for and record the user's payment
    double payment = getPayment();

    // Step 5: Check if the payment is sufficient
    if (checkPayment(price, payment)) {
        // Step 6: Dispense item and give change if overpaid
        dispenseItem(choice);
        giveChange(price, payment);
    } else {
        // If payment was insufficient, notify the user
        cout << "Not enough money.\n";
    }

    // End of transaction
    return 0;
}
