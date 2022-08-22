#include <sqlite3.h>


class database
{
	
	public:

		char* messageError; 
		sqlite3* DB; 
		int db; 

		database();

		void insert(string firstName, string lastName,string userEmail, string userPassword);
};		void createTable();


