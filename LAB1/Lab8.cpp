#include <iostream>

using namespace std;

template <typename T>
T calculateVolume(T a) {
    return a * a * a;
}

int main() {
    int choice;
    int intSide;
    double doubleSide;

    cout << "Виберіть тип чисел для вводу:\n";
    cout << "1. Цілі числа\n";
    cout << "2. Дійсні числа\n";
    cout << "(1 або 2): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Введіть довжину ребра (ціле число): ";
        cin >> intSide;
        cout << "Об'єм куба : " << calculateVolume(intSide) << endl;
        break;
    case 2:
        cout << "Введіть довжину ребра (дійсне число): ";
        cin >> doubleSide;
        cout << "Об'єм куба : " << calculateVolume(doubleSide) << endl;
        break;
    }
    return 0;
}
