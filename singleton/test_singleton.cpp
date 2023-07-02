#include <iostream>
#include "Database.h"

int main(int argc, char const *argv[])
{
    {
        Database *db = Database::getInstance();
        db->printID();
    }

    Database *db = Database::getInstance();
    db->printID();
    return 0;
}
