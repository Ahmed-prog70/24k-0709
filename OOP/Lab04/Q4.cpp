#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    int carID;
    string model;
    int year;
    bool isRented;

public:
    Car() : isRented(false) {}
    Car(int id, string mdl, int yr) : carID(id), model(mdl), year(yr), isRented(false) {}
    void rentCar() {
        if (!isRented) {
            isRented = true;
            cout << "Car " << carID << " rented successfully." << endl;
        } else {
            cout << "Car " << carID << " is already rented." << endl;
        }
    }
    void returnCar() {
        if (isRented) {
            isRented = false;
            cout << "Car " << carID << " returned successfully." << endl;
        } else {
            cout << "Car " << carID << " is already available." << endl;
        }
    }
    bool isVintage() {
        return year < 2000;
    }
    void displayDetails() {
        cout << "Car ID: " << carID << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Rented: " << (isRented ? "Yes" : "No") << endl;
    }
};

int main() {
    Car car1(1, "Toyota Corolla", 2015);
    Car car2(2, "Lamborghini", 1999);
    Car car3(3, "Honda Civic", 2024);

    cout << "Car 1 Details:" << endl;
    car1.displayDetails();
    cout << endl;
    cout << "Car 2 Details:" << endl;
    car2.displayDetails();
    cout << endl;
    cout << "Car 3 Details:" << endl;
    car3.displayDetails();
    cout << endl;
    car1.rentCar();
    car2.rentCar();
    car3.rentCar();
    cout << "Is Car 1 vintage? " << (car1.isVintage() ? "Yes" : "No") << endl;
    cout << "Is Car 2 vintage? " << (car2.isVintage() ? "Yes" : "No") << endl;
    cout << "Is Car 3 vintage? " << (car3.isVintage() ? "Yes" : "No") << endl;
    car1.returnCar();
    car2.returnCar();
    car3.returnCar();
    return 0;
}