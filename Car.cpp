#include "Car.h"

    Car::Car(string _M , string _C, string _PD, double _PPD , string _PN )
    {
        Manufacturer = _M;
        Color = _C;
        ProductionYear = _PD;
        Price_per_day = _PPD;
        PlateNumber = _PN;
    }

    void Car::print()
    {
        cout << "=========Car Information============\n";

        cout << "\t Manufactured By: " << Manufacturer << endl;
        cout << "\t Colour: " << Color << endl;
        cout << "\t Production Year: " << ProductionYear << endl;
        cout << "\t Price Per Day: " << Price_per_day << endl;
        cout << "\t Plate Number: " << PlateNumber << endl;
    }

    void Car::setManufacturer(string _M) { Manufacturer = _M; }
    void Car::setColor(string _C) { Color = _C; }
    void Car::setProductionYear(string _PD) { ProductionYear = _PD; }
    void Car::setPrice_per_day(double _PPD) { Price_per_day = _PPD; }
    void Car::setPlateNumber(string _PN) { PlateNumber = _PN; }

    string Car::getManufacturer() const { return Manufacturer; }
    string Car::getColor() const { return Color; }
    string Car::getProductionYear() const { return ProductionYear; }
    double Car::getPrice_per_day() const { return Price_per_day; }
    string Car::getPlateNumber() const { return PlateNumber; }

    

    void Car::addCar()
    {
        cout << "Enter your car's Manufacturer : ";
        cin >> Manufacturer;

        cout << endl
             << "Enter your car's color : ";
        cin >> Color;

        cout << endl
             << "Enter your car's Production year : ";
        cin >> ProductionYear;

        cout << endl
             << "Enter your car's Price Per Day (RM) : ";
        cin >> Price_per_day;

        cout << endl
             << "Enter your car's Plate Number : ";
        cin >> PlateNumber;
    }

    ostream &operator<<(ostream &strm, const Car &obj)
    {

    strm << setw(8) << obj.Manufacturer << setw(12) << obj.Color << setw(20) << obj.ProductionYear;
    strm << setw(26) << obj.Price_per_day << setw(33) << obj.PlateNumber << endl;

    return strm;
    }