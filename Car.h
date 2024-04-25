#ifndef CAR_H
#define CAR_H
#pragma once

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Car
{
private:
    string Manufacturer;
    string Color;
    string ProductionYear;
    double Price_per_day;
    string PlateNumber;

public:

    //Constructor
    Car(string _M = "", string _C = "", string _PD = "", double _PPD = 0.0, string _PN = "");

    // Print cars
    void print();


    // Accessors and Mutators
    void setManufacturer(string _M);
    void setColor(string _C);
    void setProductionYear(string _PD);
    void setPrice_per_day(double _PPD);
    void setPlateNumber(string _PN);

    string getManufacturer() const;
    string getColor() const;
    string getProductionYear() const;
    double getPrice_per_day() const;
    string getPlateNumber() const;

    //Overloaded operator
    friend ostream &operator<<(ostream &, const Car &);

    // To add new cars for registering
    void addCar();
};


#endif