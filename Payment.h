#ifndef PAYMENT_H
#define PAYMENT_H
#pragma once

#include <iostream>
#include <string>
using namespace std;

class Payment
{
private:
    double paymentAmount;
    int paymentWay;

public:
    void setPaymentAmount(double amount);
    void setPaymentWay(int way);

    double getPaymentAmount();
    int getPaymentWay();

    void displayPayment();

    void makePayment();

};
#endif