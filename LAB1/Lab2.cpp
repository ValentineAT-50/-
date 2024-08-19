#include <iostream>

using namespace std;

string kiloWord(int totalKilos) {
    int lastNum = totalKilos / 10;
    int last2Num = totalKilos / 100;

    switch (lastNum) {
    case 100:
        return "грам";
    case 1000:
        return "грам";
    default:
        return "грам≥в";
    }
}

int main() {
    int kilogram;
    int gramPerKilogram = 1000;

    cout << "¬вед≥ть розм≥р файлу в к≥лограмах: ";
    cin >> kilogram;

    int totalKilos = kilogram * gramPerKilogram;

    cout << kilogram << " кг маЇ: " << totalKilos << " " << kiloWord(totalKilos) << endl;

    return 0;
}
