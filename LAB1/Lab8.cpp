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

    cout << "������� ��� ����� ��� �����:\n";
    cout << "1. ֳ� �����\n";
    cout << "2. ĳ��� �����\n";
    cout << "(1 ��� 2): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "������ ������� ����� (���� �����): ";
        cin >> intSide;
        cout << "��'�� ���� : " << calculateVolume(intSide) << endl;
        break;
    case 2:
        cout << "������ ������� ����� (����� �����): ";
        cin >> doubleSide;
        cout << "��'�� ���� : " << calculateVolume(doubleSide) << endl;
        break;
    }
    return 0;
}
