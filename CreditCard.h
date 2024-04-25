#ifndef CREDITCARD_H
#define CREDITCARD_H

#pragma once


#include "Payment.h"

#include <iostream>
#include <iomanip>

using namespace std;


class CreditCard :public Payment
{
private:
    string creditCardType;
    string creditCardExpDate;
    string creditCardName;
    string creditCardId;

public:
    CreditCard();
    CreditCard(string cct, string cced, string ccn, string cci );
    // setter functions from
    void setCreditCardType(string type);

    void setcreditCardExpDate(string date);

    void setCreditCardName(string name);
    void setCreditCardId(string id);


    string getCreditCardType();
    string getcreditCardExpDate();

    string getCreditCardName();

    string getCreditCardId();


    void ccMenu();
    void addCreditCard();

    void editCreditCard();

    void deleteCreditCard();
};

#endif