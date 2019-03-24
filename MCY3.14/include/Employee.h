#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee( string first, string last, int salary )
{
   setFirstName( first );
   setLastName( last );
   setMonthlySalary( salary );
}


void Employee::setFirstName( string name )
{
   firstName = name;
}

