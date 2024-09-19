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
    // Конструктор за замовчуванням
    House() : address("Невідома адреса"), floor(0), rooms(0), area(0.0) {
        cout << "Конструктор за замовчуванням робочий" << endl;
    }

    // Конструктор з параметрами
    House(string addr, int flr, int rm, double ar) : address(addr), floor(flr), rooms(rm), area(ar) {
        cout << "Конструктор з параметрами робочий" << endl;
    }

    // Конструктор копіювання
    House(const House &other) : address(other.address), floor(other.floor), rooms(other.rooms), area(other.area) {
        cout << "Конструктор копіювання робочий" << endl;
    }

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


void showAll(const House &house) { // Вивід всіх даних про будинок
    house.showAddress();
    house.showFloor();
    house.showRooms();
    house.showArea();
    cout << "------------------" << endl;
}

void inputHouseData(House &house) { // Введення даних про будинок

    string address;
    int floor, rooms;
    double area;

    cout << "Введіть адресу будинку: ";
    cin.ignore(); // Очищуємо потік перед введенням рядка
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
        cout << endl; // Введення даних
    }

    
    for (int i = 0; i < size; ++i) {
        cout << "Дані для будинку " << i + 1 << ":" << endl;
        showAll(houses[i]); // Виведення введених даних
    }

    return 0;
}
