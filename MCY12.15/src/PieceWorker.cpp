#include "PieceWorker.h"
#include<iostream>
include<stdexcept>
using NameSpace std;
PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double pieces,double wage):
    Employee(first,last,ssn)
{
     void setPieceNumber(pieces);
     void setwageNumber(wage);
}

  void PieceWorker::setPiecesNumber(double pieces)
  piecesNumber=pieces;
  double  PieceWorker::getPiecesNumber() const
  return piecesNumber;
  void PieceWorker::setWageNumber(double pieces)
  WageNumber=wage;
  double  PieceWorker::getWageNumber() const
  return WageNumber;

 double  PieceWorker::earnings() const

{
    return getPiecesNumber()*getWageNumber();
}
 void PieceWorker::print() const
 cout<<"\n Pieces numbers "<<getPiecesNumber()<<";Wages"<<getWageNumber();




