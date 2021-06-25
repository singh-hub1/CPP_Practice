#include <iostream>
#include <sstream>
#include <string>

using namespace std;
/*
    before writing a class to represent a thing, be sure about what are the properties
    and behaviors that you are going to include for the class.
    For our example Car class, just to make it simple, we consider there is color,  speed as
    properties and startEngine, stopEngine, acceleration, applyBrake
    as behaviors. We can add more properties and behaviors to make the car class more general,
    flexible and nearer to real world car. For the beginning this will be fine to limit
    ourself only these features.

*/

class Car
{
    private:
        string color;
        int speed;
        bool isEngineOn;

    public:
        Car();
        Car(string c);


        void acceleration();
        void applyBreak();
        int getSpeed();
        void startEngine();
        void stopEngine();
        string toString();
};

string Car::toString()
{
    ostringstream oss;
    oss << "Color of the Car: " << color << endl;
    oss << "Current Speed: " << speed << endl;
    if (isEngineOn)
        oss << "Engine is On" << endl;
    else
        oss << "Engine is Off" << endl;
    return oss.str();
}

Car::Car(string color)
{
    this->color = color;
    speed = 0;
    isEngineOn = false;
}


Car::Car()
{
  this->color = "Gray";
  this->speed = 0;
  this->isEngineOn = false;
}

int Car::getSpeed()
{
    return this->speed;
}

void Car::stopEngine()
{
    if (this->isEngineOn)
    {
        this->isEngineOn = false;
        this->speed = 0;
    }
}

void Car::acceleration()
{
    if (this->isEngineOn)
        this->speed += 10;
}

void Car::applyBreak()
{
    if (this->speed - 8 >= 0 )
        this->speed -= 8;
    else
        this->speed = 0;
}

void Car::startEngine()
{
    if (!this->isEngineOn)
    {
        this->isEngineOn = true;
    }
}

int main()
{
    Car car1, car2("Red");

    cout << car1.toString() << endl;
    car1.startEngine();
    cout << car1.toString() << endl;

    cout << car2.toString() << endl;
    car2.startEngine();

    car1.acceleration();
    car2.acceleration();

    car1.applyBreak();
    car1.applyBreak();
    cout << car1.toString() << endl;

    cout << car2.toString() << endl;
    car2.applyBreak();
    car2.stopEngine();
    car1.stopEngine();

    return 0;
}
