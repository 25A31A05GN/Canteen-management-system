#include <iostream>
#include <string>

using namespace std;

int main() {

    // Days
    string days[6] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };

    // Time Slots
    string times[3] = {
        "Morning", "Afternoon", "Evening"
    };

    // Menu Items
    string menu[6][3][3] = {

        // Monday
        {
            {"Dosa", "Idli", "Vada"},
            {"Meals", "FriedRice", "CurdRice"},
            {"Tea", "Bajji", "Samosa"}
        },

        // Tuesday
        {
            {"Puri", "Upma", "Pongal"},
            {"Biryani", "Noodles", "Meals"},
            {"Coffee", "Puffs", "Biscuits"}
        },

        // Wednesday
        {
            {"Chapati", "Dosa", "Idli"},
            {"VegRice", "Meals", "CurdRice"},
            {"Tea", "Mirchi", "Cookies"}
        },

        // Thursday
        {
            {"Poori", "Uttapam", "Vada"},
            {"FriedRice", "Biryani", "Meals"},
            {"Coffee", "Samosa", "Bajji"}
        },

        // Friday
        {
            {"Pongal", "Dosa", "Idli"},
            {"Noodles", "VegMeals", "Rice"},
            {"Tea", "Puffs", "Biscuits"}
        },

        // Saturday
        {
            {"MasalaDosa", "Upma", "Vada"},
            {"ChickenBiryani", "Meals", "FriedRice"},
            {"Coffee", "Bajji", "Samosa"}
        }
    };

    // Prices
    int prices[6][3][3] = {

        // Monday
        {
            {40, 30, 20},
            {80, 70, 60},
            {10, 25, 20}
        },

        // Tuesday
        {
            {35, 25, 30},
            {120, 90, 80},
            {15, 20, 10}
        },

        // Wednesday
        {
            {40, 45, 30},
            {90, 80, 60},
            {10, 20, 15}
        },

        // Thursday
        {
            {35, 50, 25},
            {70, 120, 80},
            {15, 20, 25}
        },

        // Friday
        {
            {30, 40, 30},
            {90, 80, 60},
            {10, 20, 15}
        },

        // Saturday
        {
            {50, 25, 20},
            {150, 80, 70},
            {15, 25, 20}
        }
    };

    int dayChoice, timeChoice;

    cout << "===== CANTEEN MENU SYSTEM =====" << endl;

    // Select Day
    cout << "\nSelect Day:" << endl;

    for (int i = 0; i < 6; i++) {
        cout << i + 1 << ". " << days[i] << endl;
    }

    cout << "Enter choice: ";
    cin >> dayChoice;

    // Select Time
    cout << "\nSelect Time:" << endl;
    cout << "1. Morning" << endl;
    cout << "2. Afternoon" << endl;
    cout << "3. Evening" << endl;

    cout << "Enter choice: ";
    cin >> timeChoice;

    // Convert to array index
    dayChoice--;
    timeChoice--;

    // Display Menu
    cout << "\n===== MENU =====" << endl;

    for (int i = 0; i < 3; i++) {

        cout << i + 1 << ". "
             << menu[dayChoice][timeChoice][i]
             << " - Rs."
             << prices[dayChoice][timeChoice][i]
             << endl;
    }

    int total = 0;
    int itemChoice, quantity;
    char more;

    // Ordering Section
    do {

        cout << "\nEnter Item Number: ";
        cin >> itemChoice;

        cout << "Enter Quantity: ";
        cin >> quantity;

        itemChoice--;

        int cost =
            prices[dayChoice][timeChoice][itemChoice] * quantity;

        total += cost;

        cout << "Added Successfully!" << endl;
        cout << "Cost = Rs." << cost << endl;

        cout << "\nDo you want to order more items? (y/n): ";
        cin >> more;

    } while (more == 'y' || more == 'Y');

    // Final Bill
    cout << "\n===== FINAL BILL =====" << endl;
    cout << "Total Amount = Rs." << total << endl;

    // Payment Section
    int payment;

    cout << "\nSelect Payment Mode" << endl;
    cout << "1. Online" << endl;
    cout << "2. Offline" << endl;

    cout << "Enter choice: ";
    cin >> payment;

    if (payment == 1) {

        cout << "\nPayment Successful!" << endl;
        cout << "Thank You! Visit Again." << endl;
    }
    else if (payment == 2) {

        cout << "\nGo to the counter and pay the bill." << endl;
    }
    else {

        cout << "\nInvalid Payment Option!" << endl;
    }

    return 0;
}
