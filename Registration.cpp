
#include <string>
#include <iostream>
#include <sqlite3.h>
#include "Registration.h"
#include "Login.h"
#include "database.h"

using  namespace  std;  

string firstName; 
string lastName;
string email;
string password;

Registeration::Registeration(string firstName,  string lastName, string userEmail, string userPassword)
{
    this->firstName = firstName;
    this->lastName  =  lastName;
    this->userEmail = userEmail;
    this->userPassword = userPassword;
}

void Registeration::Registeration::sigup() {

    std::cout << "Registration  Page" << endl;

    database database;

    if (this->firstName.length() > 4 && this->lastName.length() > 4 && userEmail.length() > 4 && userPassword.length() > 4) {

        database.insert(firstName, this->lastName, this->userEmail, this->userPassword);

        cout << "Login  page " << endl;

        string  email;

        cout << "Please  enter email " << endl;
        string password;

        cout << "Please enter password " << endl;
        char* messageError;


        Login  loginClass(email ,  password);

        loginClass.loginFunction();
    }
}

