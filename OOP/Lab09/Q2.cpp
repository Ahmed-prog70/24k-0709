#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
public:
    virtual ~SmartDevice() {}
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual string getStatus() const = 0;
};

class LightBulb : public SmartDevice {
    bool isOn;
    int brightness;
public:
    LightBulb() : isOn(false), brightness(50) {}
    void turnOn() override { isOn = true; }
    void turnOff() override { isOn = false; }
    string getStatus() const override {
        return "Light: " + string(isOn ? "ON" : "OFF") + 
               ", Brightness: " + to_string(brightness) + "%";
    }
    void setBrightness(int level) { brightness = level; }
};

class Thermostat : public SmartDevice {
    bool isOn;
    double temperature;
public:
    Thermostat() : isOn(false), temperature(22.0) {}
    void turnOn() override { isOn = true; }
    void turnOff() override { isOn = false; }
    string getStatus() const override {
        return "Thermostat: " + string(isOn ? "ON" : "OFF") + 
               ", Temperature: " + to_string(temperature) + "°C";
    }
    void setTemperature(double temp) { temperature = temp; }
};

int main() {
    SmartDevice* light = new LightBulb();
    SmartDevice* thermo = new Thermostat();

    light->turnOn();
    thermo->turnOn();
    
    cout << light->getStatus() << endl;
    cout << thermo->getStatus() << endl;

    ((LightBulb*)light)->setBrightness(75);
    ((Thermostat*)thermo)->setTemperature(21.5);
    
    cout << light->getStatus() << endl;
    cout << thermo->getStatus() << endl;

    light->turnOff();
    thermo->turnOff();

    delete light;
    delete thermo;
    return 0;
}