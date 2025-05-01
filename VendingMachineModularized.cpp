#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function declarations (prototypes)
void displayMenu();
int getUserChoice();
double getPrice(int choice);
double getPayment();
bool checkPayment(double price, double payment);
void dispenseItem(int choice);
void giveChange(double price, double payment);

int main() {
    // Modular structure: main coordinates the program logic
    displayMenu();
    int choice = getUserChoice();
    double price = getPrice(choice);
    double payment = getPayment();

    if (checkPayment(price, payment)) {
        dispenseItem(choice);
        giveChange(price, payment);
    } else {
        cout << "Not enough money.\n";
    }

    return 0;
}

// Function definitions below main

void displayMenu() {
    cout << "========= Vending Machine Menu =========" << endl;
    cout << "1. Water        - $1.00" << endl;
    cout << "2. Soda         - $1.50" << endl;
    cout << "3. Chips        - $2.00" << endl;
    cout << "4. Chocolate    - $2.50" << endl;
    cout << "========================================" << endl;
}

int getUserChoice() {
    int choice;
    cout << "Please select an item (1-4): ";
    cin >> choice;
    return choice;
}

double getPrice(int choice) {
    switch (choice) {
        case 1: return 1.00;
        case 2: return 1.50;
        case 3: return 2.00;
        case 4: return 2.50;
        default: return 0.0;
    }
}

double getPayment() {
    double payment;
    cout << "Enter payment amount: $";
    cin >> payment;
    return payment;
}

bool checkPayment(double price, double payment) {
    return payment >= price;
}

void dispenseItem(int choice) {
    switch (choice) {
        case 1: cout << "Dispensing Water..." << endl; break;
        case 2: cout << "Dispensing Soda..." << endl; break;
        case 3: cout << "Dispensing Chips..." << endl; break;
        case 4: cout << "Dispensing Chocolate..." << endl; break;
        default: cout << "Dispensing Unknown Item..." << endl; break;
    }
}

void giveChange(double price, double payment) {
    double change = payment - price;
    if (change > 0) {
        cout << "Returning change: $" << fixed << setprecision(2) << change << endl;
    }
}
