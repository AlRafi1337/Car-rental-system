#ifndef CLIENT_H
#define CLIENT_H
#pragma once

#include <iostream>
#include <string>
using namespace std;

class Client
{
protected:
    string name;
    string ID;
    string DoB;
    int contact;

public:
    // Constructor
    Client(string _n = "", string _ID = "", string _DoB = "", int _C = 0);


    // Accessors and Mutator

    string getname() const;
    void setname(string _n);

    string getID() const;
    void setID(string _ID);

    string getDoB() const;
    void setDoB(string _DoB);

    int getContact() const;
    void setContact(int _C);

    //Polymorphism concept
    virtual void getdata()  ;
};


#endif