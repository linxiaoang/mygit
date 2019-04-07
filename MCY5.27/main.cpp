#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{

   double amount=0;
   double principal=24.0;
   double rate =0.05;
   cout<<"year"<<setw(21)<<"Amount on deposit"<<endl;
   cout<<fixed<<setprecision(2);
   for(unsigned int year=1626;year<=2013;++year)
   {
       amount=principal*pow(1.0+rate,year);
       cout<<setw(4)<<year<<setw(21)<<amount<<endl;
   }
}
