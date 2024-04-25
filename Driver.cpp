#include "Driver.h"

     Driver::Driver(){} 

    string Driver::getLN() const { return LicenseNO; }
    void Driver::setLN(string _LN) { LicenseNO = _LN; }



    Car Driver::getCar() const { return car;}

    void Driver::RegisterCar(){ car.addCar(); }

    ostream &operator<<(ostream &stem, const Driver &obj)
    {

        stem << "\t-Name : " << obj.name << endl;
        stem << "\t-ID : " << obj.ID << endl;
        stem << "\t-Date of Birth : " << obj.DoB << endl;
        stem << "\t-Contact Number : " << obj.contact << endl;
        stem << "\t-License Number : " << obj.LicenseNO << endl;

        return stem;
    }

    
    void Driver::getdata()
    {
        cout << "Enter your full name : ";
        getline(cin, name);
        getline(cin, name);

        cout << endl
            << "Enter your ID : ";
        cin >> ID;

        cout << endl
            << "Enter your Date of birth form (dd / mm / yy ): ";
        getline(cin, DoB);
        getline(cin, DoB);

        cout << endl
            << "Enter your Contact number : ";
        cin >> contact;
       

        cout << endl
            << "Enter your License number : ";
        getline(cin, LicenseNO);
        getline(cin, LicenseNO);
    }
    