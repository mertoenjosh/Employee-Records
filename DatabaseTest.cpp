//  DatabaseTest.cpp

#include <iostream>

#include "Database.h"

using namespace std;
using namespace Records;

int main(int argc, char** argv) 
{
    Database myDB;

    Employee& emp1 = myDB.addEmployee("Martin", "Thuo");
    emp1.fire();

    Employee& emp2 = myDB.addEmployee("Scott", "Klepper");
    emp2.setSalary(100000);

    Employee& emp3 = myDB.addEmployee("Nick", "Solter");
    emp3.setSalary(100000);
    emp3.promote();

    cout << "all employees: " << endl;
    cout << endl;
    myDB.displayAll();

    cout << endl;
    cout << "current employees: " << endl;
    cout << endl;
    myDB.displayCurrent();

    cout << endl;
    cout << "former employees: " << endl;
    cout << endl;
    myDB.displayFormer();
}
