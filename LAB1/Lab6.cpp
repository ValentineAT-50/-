#include <iostream>

using namespace std;

int calculateArea(int a, int b) {
    return a * b;
}

double calculateArea(double a, double b) {
    return a * b;
}

int main() {
    int choice;
    int intA, intB;
    double doubleA, doubleB;

    cout << "Виберіть тип чисел для вводу:\n";
    cout << "1. Цілі числа\n";
    cout << "2. Дійсні числа\n";
    cout << "(1 або 2): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Введіть цілі значення сторін a та b: ";
        cin >> intA >> intB;
        cout << "Площа прямокутника (цілі числа): " << calculateArea(intA, intB) << endl;
        break;
    case 2:
        cout << "Введіть дійсні значення сторін a та b: ";
        cin >> doubleA >> doubleB;
        cout << "Площа прямокутника (дійсні числа): " << calculateArea(doubleA, doubleB) << endl;
        break;
    default:
        cout << "Неправильний вибір! Введіть 1 або 2" << endl;
        break;
    }

    return 0;
}
