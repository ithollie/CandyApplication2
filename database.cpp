#include "database.h"
#include <iostream>
#include <string>

using namespace  std; 

char* messageError;  
int db = 0;
sqlite3* DB;

database::database() {
    
    this->db = sqlite3_open("example.db", &DB);
}

void database::insert(string firstName, string lastName, string userEmail, string userPassword)
{	
    string  sql = "INSERT INTO users(firstName, lastName, userEmail, userPassword) VALUES(1, 'STEVE', 'GATES', 30, 'PALO ALTO', 1000.0";

    this->db = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);

    if (exit != SQLITE_OK) {

        cout<<"error Insert" << endl;

        sqlite3_free(messageError);
    }
}

void  database::createTable() {

    std::string sql = "CREATE TABLE users("
        "id INT PRIMARY KEY     NOT NULL, "
        "firstName           TEXT    NOT NULL, "
        "lastName          TEXT     NOT NULL, "
        "Age          INT     NOT NULL, "
        "userEmail        CHAR(50), "
        "SALARY         REAL );";
    
    db = sqlite3_open("example.db", &DB);
    char* messaggeError;
    db = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError);

    if (exit != SQLITE_OK) {
        std::cerr << "Error Create Table" << std::endl;
        sqlite3_free(messaggeError);
    }
    else{
        std::cout << "Table created Successfully" << std::endl;
        sqlite3_close(DB);
    }
}
