
#include <iostream>

using namespace std;

int calVolume(int a) {
    return a * a * a;
}

double calVolume(double a) {
    return a * a * a;
}

int main() {
    int choise;
    int intSide;
    double doubleSide;
    
    cout << "Виберіть тип числа (ціле / дійсне): " << endl;
    cout << "1. Ціле" << endl;
    cout << "2. Дійсне" << endl;
    cin >> choise;

    switch (choise) {
        
    case 1: 
    cout << "Введіть довжину ребра (ціле число): ";
    cin >> intSide;
    cout << "Об'єм куба: " << calVolume(intSide) << endl;
    break;
    
    case 2:
    cout << "Введіть довжину ребра (дійсне число): ";
    cin >> doubleSide;
    cout << "Об'єм куба: " << calVolume(doubleSide) << endl;
    break;
    }
    return 0;
}
