#include "Payment.h"

    void Payment::setPaymentAmount(double amount) { paymentAmount = amount; }
    void Payment::setPaymentWay(int way) { paymentWay = way; }

    double Payment::getPaymentAmount() { return paymentAmount; }
    int Payment::getPaymentWay() { return paymentWay; }

    void Payment::displayPayment()
    {
        cout << "\n";
        cout << "Your payment amount is: " << getPaymentAmount() << endl;
        cout << "\n";
    }

    void Payment::makePayment()
    {
        displayPayment();
        cout << "===Please select your payment method===" << endl;
        cout << endl;
        cout << "1. Pay with card." << endl;
        cout << "2. Pay with cash." << endl
             << endl;
        int method;
        cout << "==> ";
        cin >> method;

        setPaymentWay(method);
    }
