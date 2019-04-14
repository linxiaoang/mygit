#include <iostream>

using namespace std;

int integerPower(int base,int exponent)
{    int result=1;

    for(unsigned int i=1;i<=exponent;i++)
    {
        result*=base;
    }
      return result;
}

int main()
{
    int base=1;
    int exponent=1;
    cout<<"Enter base and exponent:";
    cin>>base>>exponent;
   cout<< "The result is:"<<integerPower(base,exponent);
}

