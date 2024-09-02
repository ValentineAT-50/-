#include <iostream>
#include <string>
using namespace std;

class House {
private:
    string address;
    int floor;
    int rooms;
    double area;

public:
    void setAddress(string addr) {
        address = addr;
    }
    void setFloor(int flr) {
        floor = flr;
    }
    void setRooms(int rm) {
        rooms = rm;
    }
    void setArea(double ar) {
        area = ar;
    }
    string getAddress() const {
        return address;
    }
    int getFloor() const {
        return floor;
    }
    int getRooms() const {
        return rooms;
    }
    double getArea() const {
        return area;
    }
    void showAddress() const {
        cout << "Адреса: " << address << endl;
    }
    void showFloor() const {
        cout << "Кількість поверхів: " << floor << endl;
    }
    void showRooms() const {
        cout << "Кімнати: " << rooms << endl;
    }
    void showArea() const {
        cout << "Площа: " << area << " м2" << endl;
    }
};

void showAll(const House &house) {
    house.showAddress();
    house.showFloor();
    house.showRooms();
    house.showArea();
    cout << "------------------" << endl;
}

void listHousesByRooms(const House houses[], int size, int numRooms) {
    cout << "Будинки з " << numRooms << " кімнатами:" << endl;
    for (int i = 0; i < size; ++i) {
        if (houses[i].getRooms() == numRooms) {
            showAll(houses[i]);
        }
    }
}

void listHousesByRoomsAndFloorRange(const House houses[], int size, int numRooms, int minFloor, int maxFloor) {
    cout << "Будинки з " << numRooms << " кімнатами та поверхами від " << minFloor << " до " << maxFloor << ":" << endl;
    for (int i = 0; i < size; ++i) {
        if (houses[i].getRooms() == numRooms && houses[i].getFloor() >= minFloor && houses[i].getFloor() <= maxFloor) {
            showAll(houses[i]);
        }
    }
}

void listHousesByArea(const House houses[], int size, double minArea) {
    cout << "Будинки з площею більшою за " << minArea << " м2:" << endl;
    for (int i = 0; i < size; ++i) {
        if (houses[i].getArea() > minArea) {
            showAll(houses[i]);
        }
    }
}

void inputHouseData(House &house) {
    string address;
    int floor, rooms;
    double area;

    cout << "Введіть адресу: ";
    getline(cin, address);
    house.setAddress(address);

    cout << "Введіть поверх: ";
    cin >> floor;
    house.setFloor(floor);

    cout << "Введіть кількість кімнат: ";
    cin >> rooms;
    house.setRooms(rooms);

    cout << "Введіть площу (м2): ";
    cin >> area;
    house.setArea(area);

}

int main() {
    const int size = 5;
    House houses[size];

    for (int i = 0; i < size; ++i) {
        cout << "Введіть дані для будинку " << i + 1 << ":" << endl;
        inputHouseData(houses[i]);
        cout << endl;
    }

    listHousesByRooms(houses, size, 3);
    listHousesByRoomsAndFloorRange(houses, size, 2, 2, 5);
    listHousesByArea(houses, size, 75.0);

    return 0;
}