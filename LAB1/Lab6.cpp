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

    cout << "������� ��� ����� ��� �����:\n";
    cout << "1. ֳ� �����\n";
    cout << "2. ĳ��� �����\n";
    cout << "(1 ��� 2): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "������ ��� �������� ����� a �� b: ";
        cin >> intA >> intB;
        cout << "����� ������������ (��� �����): " << calculateArea(intA, intB) << endl;
        break;
    case 2:
        cout << "������ ���� �������� ����� a �� b: ";
        cin >> doubleA >> doubleB;
        cout << "����� ������������ (���� �����): " << calculateArea(doubleA, doubleB) << endl;
        break;
    default:
        cout << "������������ ����! ������ 1 ��� 2" << endl;
        break;
    }

    return 0;
}
