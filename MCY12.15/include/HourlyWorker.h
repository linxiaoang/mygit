#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include"Employee.h"

class HourlyWorker:public Emoployee
{
    public:
        HourlyWorker(const string &,const string &,const string &,double=0.0,double=0.0);
        void setWage(double);
        double getWage() const;
         void setHours(double);
        double getHours() const;
        virtual double earnings() const;
        virtual void print() const;
    private:
        double wage;
        double hours;

};

#endif // HOURLYWORKER_H
