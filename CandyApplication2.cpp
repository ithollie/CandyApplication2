// CandyApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//A common place to buy candy is from a machine. The machine sells candies, chips, gum, and cookies. You have been asked to write a program for this candy machine.

//The program should do the following :
//   login and  registration
//   insert  the  registration  data in  to database
//1. Show the customer the different products sold by the candy machine.
//2. Let the customer make the selection.
//3. Show the customer the cost of the item selected.
//4. Accept money from the customer.
//5. Release the item.

#include <iostream>
#include <cstring>
#include <string>
#include <sqlite3.h>
#include "Login.h"
using namespace std;

int main()
{
    int exit = 0; 

 
    sqlite3* DB;

    std::string sql = "CREATE TABLE PERSON("
        "ID INT PRIMARY KEY     NOT NULL, "
        "NAME           TEXT    NOT NULL, "
        "SURNAME          TEXT     NOT NULL, "
        "AGE            INT     NOT NULL, "
        "ADDRESS        CHAR(50), "
        "SALARY         REAL );";
 
    exit = sqlite3_open("example.db", &DB);
    char* messaggeError;
    exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError);

    if(exit != SQLITE_OK) {
        std::cout<< "Error Create Table" << std::endl;
        sqlite3_free(messaggeError);
    }
    else
        std::cout << "Table created Successfully" << std::endl;
    sqlite3_close(DB);

    

    string email;
    string password;

    cout << " Please  enter  email " << endl; 
    cin >> email;
    
    cout << " Please enter  password " << endl;
    cin >> password;

    Login login(email, password);

    login.loginFunction();

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
