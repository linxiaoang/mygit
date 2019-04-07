#include <iostream>

using namespace std;

unsigned int number=1;
int factorial=1;
int main()
{
 cout<<"Enter the number: ";
        cin>>number;
    while(number>=1)
    {

     factorial*=number;
        number = number-1;
    }

        cout<<"Its factorial is: "<<factorial<<endl;

}



