#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "=== Αριθμομηχανή C++ ===" << endl;
    cout << "Δώσε τον πρώτο αριθμό: ";
    cin >> num1;

    cout << "Δώσε τελεστή (+, -, *, /): ";
    cin >> op;

    cout << "Δώσε τον δεύτερο αριθμό: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Αποτέλεσμα: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Αποτέλεσμα: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Αποτέλεσμα: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << "Αποτέλεσμα: " << num1 / num2 << endl;
            else
                cout << "Σφάλμα: Διαίρεση με το μηδέν!" << endl;
            break;
        default:
            cout << "Μη έγκυρος τελεστής!" << endl;
    }

    return 0;
}
