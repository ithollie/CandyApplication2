#include "Login.h"
#include <string>
#include <iostream>
#include <sqlite3.h>
#include "Run.h"
#include "Registration.h"

using  namespace  std; 

string  emaial;
string  password; 

Login::Login(string email, string password)
{
    this->email = email;
    this->password = password; 

}

void Login::loginFunction() {

    sqlite3  DB;

    if (this->email.length() > 3 && this->password.length() > 3) {

        Run runObject;

        runObject.start();

    }
    else 
    {
        string firstName;

        string lastName;

        string userEmail;

        string userPassword;

        cout << "Enter  first name " << endl;
        cin >> firstName;

        cout << "Enter  last name " << endl;
        cin >> lastName;

        cout << "Enter  email " << endl;
        cin >> userEmail;

        cout << "Enter  password " << endl;
        cin >> userPassword;

        Registeration  registerClass(firstName,  lastName, userEmail, userPassword);

        registerClass.sigup();
    }


}


