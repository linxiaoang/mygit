#include <iostream>

using namespace std;

int main()
{
    int total=0;
    int average=0;

    int number=0;
   cout<<"Enter number:";
   cin>>number;

   for( unsigned int i=1;number!=9999;i++)

    {

    total+=number;
    average=total/i;
    cin>>number;
    }
cout<<"The average is:"<<average<<endl;

}
