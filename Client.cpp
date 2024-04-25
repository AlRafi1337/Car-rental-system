#include "Client.h"


    
    // Constructor
    Client::Client(string _n , string _ID , string _DoB, int _C )
    {
        name = _n;
        ID = _ID;
        DoB = _DoB;
        contact = _C;
       
    }


    // Getters and Setters

    string Client::getname() const { return name; }
    void Client::setname(string _n) { name = _n; }

    string Client::getID() const { return ID; }
    void Client::setID(string _ID) { ID = _ID; }

    string Client::getDoB() const { return DoB; }
    void Client::setDoB(string _DoB) { DoB = _DoB; }

    int Client::getContact() const { return contact; }
    void Client::setContact(int _C) { contact = _C; }

    

    void Client::getdata()
    {
        cin >> name >> ID >> DoB >> contact ;
    } 