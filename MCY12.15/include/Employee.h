#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
using namespace std;

class Employee
{
    public:
        Employee(const string &,const string &,const string &);
        virtual ~Employee(){}

  void setFirstname(const string &);
   string getFirstname(const string &);
    void setLastname(const string &);
   string getLastname(const string &);
    void setsocialcecurityNumber(const string &);
   string getsocialcecurityNumber(const string &);
   virtual double earnings() const=0;
   virtual void print() const;
    private:
        string fristName;
        string lastName;
        string socicalSecurityNumber;
};

#endif // EMPLOYEE_H
