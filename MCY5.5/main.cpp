#include <iostream>

using namespace std;

int main()
{
   int number=0;
   int total=0;
   unsigned counter=0;
    cin>>counter;
    cout<<"Enter the numbers:";
    for( int i=1;i<=counter;i++)
   {

        cin>>number;

       total+=number;

   }
      cout<<"Sum is:"<<total;

}
