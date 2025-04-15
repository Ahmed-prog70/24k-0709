#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string model;
    double rate;

public:
    Vehicle(const string& model, double rate) : model(model), rate(rate) {}
    virtual ~Vehicle() {} 
    virtual double getDailyRate()  = 0;
    virtual void displayDetails()  = 0;
};

class Car : public Vehicle {
public:
    Car(const string& model, double rate) : Vehicle(model, rate) {}
    
    double getDailyRate() override {
           return rate;
    }
    
    void displayDetails()  override {
        cout << "Car Model: " << model << endl;
        cout << "Daily Rate: $" << getDailyRate() << endl;
    }
};


class Bike : public Vehicle {
public:
    Bike(const string& model, double rate) : Vehicle(model, rate) {}
    
    double getDailyRate() override {
       return rate * 0.8;
        }
    
    void displayDetails() override {
        cout << "Bike Model: " << model << endl;
        cout << "Daily Rate: Rs " << getDailyRate() << endl;
    }
};

int main() {

    Vehicle* car = new Car("Toyata Corolla", 50.0);
    Vehicle* bike = new Bike("Honda 125", 30.0);
    
    cout << "Vehicle Rental Options:" << endl;
    cout << "-----------------------" << endl;
    car->displayDetails();
    cout << endl;
    bike->displayDetails();
    
    delete car;
    delete bike;
    
    return 0;
}
