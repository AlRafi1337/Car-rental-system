#include "CreditCard.h"


    CreditCard::CreditCard()
        : creditCardType(""), creditCardExpDate(""), creditCardName(""), creditCardId("")
    {
    }
    CreditCard::CreditCard(string cct, string cced, string ccn, string cci)
        : creditCardType(cct), creditCardExpDate(cced), creditCardName(ccn), creditCardId(cci)
    {
    }

    // setter functions from
    void CreditCard::setCreditCardType(string type)
    {
        creditCardType = type;
    }

    void CreditCard::setcreditCardExpDate(string date)
    {
        creditCardExpDate = date;
    }

    void CreditCard::setCreditCardName(string name)
    {
        creditCardName = name;
    }

    void CreditCard::setCreditCardId(string id)
    {
        creditCardId = id;
    }

    

    string CreditCard::getCreditCardType()
    {
        return creditCardType;
    }

    string CreditCard::getcreditCardExpDate()
    {
        return creditCardExpDate;
        
    }

    string CreditCard::getCreditCardName()
    {
        return creditCardName;
    }

    string CreditCard::getCreditCardId()
    {
        return creditCardId;
    }

   

    void CreditCard::ccMenu()
    {
        cout << endl;

        cout << "=====Credit Card Menu====" << endl;
        cout << "1. Add credit card" << endl;
        cout << "2. Edit credit card info" << endl;
        cout << "3. Delete credit card info" << endl;
        cout << "4. Pay on cash" << endl; // cash is already written out of the menu in the main function
        cout << "5. Exit." << endl;

        cout << endl;

        int ccchoice;
        cout << "Choose an operation [1 - 5] => ";
        cin >> ccchoice;

        cout << endl;

        while (ccchoice != 5)
        {
            switch (ccchoice)
            {
            case 1:

                addCreditCard();
                break;

            case 2:

                editCreditCard();

                break;

            case 3:

                deleteCreditCard();
                break;

            case 4:

                cout << "You have selected pay on cash" << endl;
                cout << "Please pay the cash in the counter." << endl;
                break;

            case 5:
                break;
            }

            break;
        }
    }

    void CreditCard::addCreditCard()
    {
        string TYPE = "", DATE = "", NAME = "", ID = "";

        cin.ignore();
        cout << "**Please fill up the following information**" << endl;

        cout << "1. Credit Card Type: ";
        getline(cin, TYPE);
        setCreditCardType(TYPE);
        cout << endl;
        cout << "2. Credit Card Expiration Date: ";
        getline(cin, DATE);
        setcreditCardExpDate(DATE);
        cout << endl;
        cout << "3. Card Holder Name: ";
        getline(cin, NAME);
        setCreditCardName(NAME);
        cout << endl;
        cout << "4. Credit Card Id: ";
        getline(cin, ID);
        setCreditCardId(ID);
        cout << endl;

        cout << "Your payment was successful, thank you" << endl;
       
    }

    void CreditCard::editCreditCard()
    {
        cout << "Here is your credit card information: " << endl;
        cout << "1. Credit card type: " << getCreditCardType() << endl;
        cout << "2. Credit card expiration date: " << getcreditCardExpDate() << endl;
        cout << "3. Credit card name: " << getCreditCardName() << endl;
        cout << "4. Credit card id: " << getCreditCardId() << endl;
       

        cout << "\n"
             << "\n";

        cout << "Choose an option ==> [1-4]" << endl;
        int opt;
        cin >> opt;

        if (opt == 1)
        {
            cin.ignore();
            cout << "Enter the credit card type: ";
            string type;
            getline(cin, type);
            setCreditCardType(type);
            cout << endl;
            cout << "Your credit card information has been changed!" << endl
                 << endl;
            cout << "Here is your updated information: " << endl;
            cout << "Credit card type: " << getCreditCardType() << endl;
        }
        else if (opt == 2)
        {
            cin.ignore();
            cout << "Enter the credit card expiration date: " << endl;
            string date;
            getline(cin, date);
            setcreditCardExpDate(date);

            cout << endl;
            cout << "Your credit card information has been changed!" << endl
                 << endl;
            cout << "Here is your updated information: " << endl;
            cout << "Credit card expiration date: " << getcreditCardExpDate() << endl;
        }
        else if (opt == 3)
        {
            cin.ignore();
            cout << "Enter the credit card Name:  " << endl;
            string name;
            getline(cin, name);
            setCreditCardName(name);

            cout << endl;
            cout << "Your credit card information has been changed!" << endl
                 << endl;
            cout << "Here is your updated information: " << endl;
            cout << "Credit card name: " << getCreditCardName() << endl;
        }
        else if (opt == 4)
        {
            cin.ignore();
            cout << "Enter the credit card Id: " << endl;
            string id;
            getline(cin, id);
            setCreditCardId(id);

            cout << endl;
            cout << "Your credit card information has been changed!" << endl
                 << endl;
            cout << "Here is your updated information: " << endl;
            cout << "Credit card id: " << getCreditCardId() << endl;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }

        ccMenu();
    }

    void CreditCard::deleteCreditCard()
    {
        setCreditCardType("");
        setCreditCardName("");
        setcreditCardExpDate("");
        setCreditCardId("");

        cout << "Your credit card information has been erased!" << endl;

        ccMenu();
    }