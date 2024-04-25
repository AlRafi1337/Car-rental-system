#include <iomanip>
#include <iostream>
//------------------------------------------------------------------------------
//////////////////////////SUBMISSION OF THE C++ CODE\\\\\\\\\\\\\\\\\\\\\\\\\\\\
//------------------------------------------------------------------------------
// School of Computing, Universiti Teknologi Malaysia
// SECJ J1023- Programming Technique II
// Semester 2, 2021/2022
//------------------------------------------------------------------------------
// Group No. 07
// Scetion No. 07
// Member 1. Abdullah Al Khalid - A21EC4025
// Member 2. YOUSEF KHALED SALEH ABDULLAH - A21EC4023
// Member 3. MOATAZ ABDO MOHAMMED AL - SHATER - A21EC4011
// Member 4. ABDULLAH AL RAFI - A21EC4006
//------------------------------------------------------------------------------

#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>
#include "Client.h"
#include "Car.h"
#include "Payment.h"
#include "CreditCard.h"
#include "Rider.h"
#include "Driver.h"

using namespace std;

#define on 1



int menu()
{
    cout << endl;
    cout << "============ Menu ============" << endl;
    cout << "\tSelect Your type" << endl
         << endl;
    cout << "1. Driver" << endl;
    cout << "2. Rider" << endl;

    cout << endl
         << endl;
    cout << "Choose a type [1-2] => ";
    int c;
    cin >> c;

    system("cls");
    bool x = true;
    int choice;
    while (x == true)
    {
        if (c == 1)
        {
            cout << "====Select a option below====" << endl
                 << endl;
            cout << "1. Register Your Car" << endl;
            cout << "2. Exit" << endl;
            cout << endl;

            cout << "Choose an operation [1-2] => ";
            cin >> choice;

           if(choice == 2){
               choice += 1;
           }    

            cout << endl;

            x = false;

            system("cls");
        }
        else if (c == 2)
        {
            cout << "1. Rent a Car" << endl;
            cout << "2. Exit" << endl;
            cout << endl;

            cout << "Choose an operation [1-2] => ";
            cin >> choice;
            choice += 1;

            cout << endl;

            x = false;
            system("cls");
        }
        else
        {
            cout << "You entered an invalid choice, please choose again !";
        }
    }

    cout << endl;
    
    return choice;

}

// main program
int main()
{

    const int total = 20;
    Rider Arider;
    Driver Adriver;
    Payment p;
    CreditCard cc;
    Client *clientinfo; 

    Car cars[total] = {
        Car("Toyota", "blue", "2012", 120, "ABC 1252"),
        Car("Nissan", "black", "2018", 200, "WD 1111"),
        Car("Ferrari", "red", "2020", 1000, "QAA 8743"),
        Car("Honda", "white", "2015", 150, "SAB 3155"),
        Car("BMW", "white", "2017", 230, "KV 4567"),
    };

   

    int c = menu();
    int  i = 6;
    while (c != 3)
    {

        int carChosen;
        
        switch (c)
        {
        case 1:
        { // user register his\her car 
            cout << "\t====Please enter your personal information====" << endl
                 << endl;
            // polymorphism     
            clientinfo = &Adriver;
            clientinfo->getdata();
            cout << endl;
            cout << "\n\tThis is your information" << endl;
            cout << Adriver;

            cout << "\nplease enter your cars information : " << endl;
            // Composition
            Adriver.RegisterCar();
            cars[i] = Adriver.getCar() ;
            i++;

            
            cout << "\n\t***Your car info has been saved!***\n***We will notify you once we get any demand on your car***\n";

            break;
        }
        case 2:
        { // user looking for a car  
            cout << endl;
            cout << "\t\t\t\t***Here is the list of cars available***" << endl;
            cout << "\t\t\t\t========================================" << endl;
            cout << endl;
            cout << setw(8) << "Manufacturer" << setw(12) << "Color" << setw(20) << "ProductionYear";
            cout << setw(26) << "Price_per_day" << setw(33) << "PlateNumber" << endl;
            cout << setw(8) << "------------" << setw(12) << "-----" << setw(20) << "--------------"
                 << setw(26) << "-------------" << setw(33) << "-----------" << endl;

            for (int j = 0; j < i; j++)
            {
                cout << cars[j];
            }
            cout << endl;
            cout << "Please choose one car  [1-5] => ";
            cin >> carChosen;
            // aggregation to assign a car
            Rider *selectedcar = new Rider;
            selectedcar->selectCaragg(&cars[carChosen - 1]);

            cout << "How many days? ==> ";

            
            int days;
            cin >> days;

            cout << endl;
            p.setPaymentAmount(selectedcar->get_Selected_price() * days);
            Arider.setPaymentAmount(p.getPaymentAmount()); 
            Arider.getPoints();
            cout << endl
                 << "\t\t\t\t***Now please enter your personal info***" << endl;
            cout << endl;
            // polymorphism
            clientinfo = &Arider;  
            clientinfo->getdata();
            cout << "\nThis is your information" << endl;
            cout << Arider;
            cout << endl;
            cout << "\nYour information is saved successfully!" << endl;
            cout << "Please proceed to payment." << endl;
            cout << endl;

            

            p.makePayment();

            if (p.getPaymentWay() == 1)
            {
                cc.ccMenu();
                break;
            }
            else if (p.getPaymentWay() == 2)
            {
                cout << endl;
                cout << "***Please pay the due amount***" << endl;
                break;
            }
            else
            {
                cout << "Please input the right option ==> [1-2]" << endl;
                p.makePayment();
                break;
            }
            break;
        }
        }
        break;
    }

    system("pause");
    return 0;
}