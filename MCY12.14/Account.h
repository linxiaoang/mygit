#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
   Account( double );
   virtual void credit( double );
   virtual bool debit( double );
   void setBalance( double );
private:
   double balance;
};

#endif
