#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>

class Database {
private:
    static Database* instance;
    static int id;
    Database(){
        std::cout << "Database constructor called!\n";
    }
public:
    static Database* getInstance();

    ~Database() {
        std::cout << "Database desctructor called!\n";
        if(instance)
            delete instance;
    }

    void printID() {
        std::cout << "Id of DB is: " << id << std::endl;
    }
};

Database* Database::getInstance() {
    if(!instance) {
        id++;
        instance = new Database();
    }
    return instance;
}

Database *Database::instance = nullptr;
int Database::id = 0;

#endif