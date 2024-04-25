#ifndef RIDER_H
#define RIDER_H

#pragma once

#include "Client.h"
#include "Car.h"
#include "Payment.h"

#include <iostream>
#include <string>
using namespace std;

class Rider : public Client, public Car, public Payment
{

protected:
    Car *car;
    int points;

public:
    Rider(string _n = "", string _ID = "", string _DoB = "", int _C = 0, int _points = 0, Car *_car = NULL);

    friend ostream &operator<<(ostream &, const Rider &);
  

    void addRider();
    void editRider();
    void displayRider();
    void deleteRider();

    void getPoints();
    void getdata();
    void selectCaragg(Car *);   
    double get_Selected_price();
    

};



#endif