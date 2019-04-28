#include <iostream>
#include<iomanip>
#include<array>
#include<random>
#include<ctime>
using namespace std;

int main()
{

    int sum=0;
    array<int,6>rollone={1,2,3,4,5,6};
    array<int,6>rolltwo={1,2,3,4,5,6};
  default_random_engine engine(static_cast<unsigned int>(time(0)));
  uniform_int_distribution<unsigned int>randomInt(1,6);
  const size_t arraySize=11;
  array<unsigned int,arraySize>frequency={2,3,4,5,6,7,8,9,10,11,12};
cout<<"Face"<<setw(13)<<"Frequency"<<endl;
  for(size_t i=0;i<rollone.();++i)
  {
     for(size_t j=0;j<rolltwo.();++j)

         sum=rollone[i]+rolltwo[j];
         ++frequency[sum];
         cout<<frequency[sum];

  }
}
