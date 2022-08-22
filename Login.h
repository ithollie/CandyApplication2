#include <sqlite3.h>
#include "Registration.h"
#include <string>

class  Login {

    private:
        string email; 
        string password; 

    public:

        Login(string email , string password);  

        void loginFunction();

};

