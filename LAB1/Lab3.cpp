#include <iostream>

using namespace std;

string byteWord(int totalBytes) {
    int lastNum = totalBytes % 10;
    int last2Num = totalBytes % 100;

        switch (lastNum) {
        case 1: 
            return "байт";
        case 2:
        case 3:
        case 4:
            return "байти";
        default: 
            return "байт≥в";
        }
    }


int main() {
    int kilobytes;
    int bytesPerKilobyte = 1024;

    cout << "¬вед≥ть розм≥р файлу в к≥лобайтах: ";
    cin >> kilobytes;

    int totalBytes = kilobytes * bytesPerKilobyte;

    cout << "‘айл займаЇ: " << totalBytes << byteWord(totalBytes) << endl;

    return 0;
}
