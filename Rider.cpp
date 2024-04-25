#include "Rider.h"

Rider::Rider(string _n , string _ID , string _DoB , int _C , int _points , Car *_car )
        : Client(_n, _ID, _DoB, _C)
    {
        points = _points;
        car = _car;
    }
    
    void Rider::getPoints()
    {
        points = getPaymentAmount();
       
        points *= 0.1;
    }


    ostream &operator<<(ostream &strm, const Rider &obj)
    {

        strm << "\t-Name : " << obj.name << endl;
        strm << "\t-ID : " << obj.ID << endl;
        strm << "\t-Date of Birth : " << obj.DoB << endl;
        strm << "\t-Contact Number : " << obj.contact << endl;
        strm << "\t-Points earned : " << obj.points << endl;

        strm << "\t*You can use these points for Cupons in the future\n" ;

        return strm;
    }



    void Rider::getdata()
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
    


    }

    void Rider::selectCaragg(Car *c)
    {
        car = c;
        cout << endl
                    << "Your selection is: " << endl
                    << *car 
                    << endl;

    }    

    double Rider::get_Selected_price(){return car->getPrice_per_day() ;}
