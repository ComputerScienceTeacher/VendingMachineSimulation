#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Display menu
    cout << "========= Vending Machine Menu =========" << endl;
    cout << "1. Water        - $1.00" << endl;
    cout << "2. Soda         - $1.50" << endl;
    cout << "3. Chips        - $2.00" << endl;
    cout << "4. Chocolate    - $2.50" << endl;
    cout << "5. Exit" << endl;
    cout << "========================================" << endl;

    // Get user choice
    int choice;
    cout << "Please select an item (1-5): ";
    cin >> choice;

    // Determine price
    double price = 0.0;
    string item = "";
    if (choice == 1) {
        price = 1.00;
        item = "Water";
    } else if (choice == 2) {
        price = 1.50;
        item = "Soda";
    } else if (choice == 3) {
        price = 2.00;
        item = "Chips";
    } else if (choice == 4) {
        price = 2.50;
        item = "Chocolate";
    } else if (choice == 5) {
        cout << "Thank you for visiting. Goodbye!" << endl;
        return 0;
    } else {
        cout << "Invalid selection." << endl;
        return 0;
    }

    // Accept payment
    double payment = 0.0;
    while (payment < price) {
        double inserted;
        cout << "Insert money ($" << fixed << setprecision(2)
             << (price - payment) << " remaining): $";
        cin >> inserted;

        if (inserted <= 0) {
            cout << "Invalid amount. Please insert a positive amount." << endl;
        } else {
            payment += inserted;
        }
    }

    // Check payment and dispense item
    if (payment >= price) {
        cout << "Dispensing " << item << "..." << endl;

        // Give change if overpaid
        double change = payment - price;
        if (change > 0) {
            cout << "Returning change: $" << fixed << setprecision(2) << change << endl;
        }
    } else {
        cout << "Insufficient payment. Transaction cancelled." << endl;
    }

    // End
    cout << "----------------------------------------" << endl;
    return 0;
}
