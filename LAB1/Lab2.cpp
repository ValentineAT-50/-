#include <iostream>

using namespace std;

string kiloWord(int totalKilos) {
    int lastNum = totalKilos / 10;
    int last2Num = totalKilos / 100;

    switch (lastNum) {
    case 100:
        return "����";
    case 1000:
        return "����";
    default:
        return "�����";
    }
}

int main() {
    int kilogram;
    int gramPerKilogram = 1000;

    cout << "������ ����� ����� � ���������: ";
    cin >> kilogram;

    int totalKilos = kilogram * gramPerKilogram;

    cout << kilogram << " �� ��: " << totalKilos << " " << kiloWord(totalKilos) << endl;

    return 0;
}
