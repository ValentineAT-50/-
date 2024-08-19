#include <iostream>

using namespace std;

string byteWord(int totalBytes) {
    int lastNum = totalBytes % 10;
    int last2Num = totalBytes % 100;

        switch (lastNum) {
        case 1: 
            return "����";
        case 2:
        case 3:
        case 4:
            return "�����";
        default: 
            return "�����";
        }
    }


int main() {
    int kilobytes;
    int bytesPerKilobyte = 1024;

    cout << "������ ����� ����� � ���������: ";
    cin >> kilobytes;

    int totalBytes = kilobytes * bytesPerKilobyte;

    cout << "���� �����: " << totalBytes << byteWord(totalBytes) << endl;

    return 0;
}
