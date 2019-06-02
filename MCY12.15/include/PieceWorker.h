#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include<string>
#include"Employee.h"

class PieceWorker: public Employee
{
public:

        PieceWorker(const string &,const string &,const string &,double=0.0,double=0.0);
        virtual ~PieceWorker(){}
        void setPiecesNumber(double);
        double getPiecesNumber() const;
        void setWageNumber(double);
        double getWageNumber() const;

        virtual double earnings() override;
        virtual void print() const;


    private:
        double wage;
        double pieces;

};

#endif // PIECEWORKER_H
