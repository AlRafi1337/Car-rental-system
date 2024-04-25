#ifndef DRIVER_H
#define DRIVER_H

#pragma once

#include "Client.h"
#include "Car.h"
#include "Payment.h"

#include <iostream>
#include <string>

using namespace std;

class Driver : public Client, public Car, public Payment
{

protected:
    Car car;
    string LicenseNO;

public:
    //Constrictor
    Driver();

    //Overloaded operator
    friend ostream &operator<<(ostream &, const Driver &);
  
    //dispaly the car (composition)
    Car getCar() const;

    //Polymorphism
    void getdata() ;

    //Accessor and Mutator
    string getLN() const ;
    void setLN(string _LN) ;

    //Register Car (composition)
    void RegisterCar();



};



#endif