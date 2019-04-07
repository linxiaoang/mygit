#include <iostream>

using namespace std;
int factorial=1;
double exponent=1;
int number=1;
int accuracy=0;
double e=1.0;
int x=1;
int main()
{
    cout<<"Enter exponent :";
    cin>>x;
    cout<<"Enter the accuracy  you want:";
    cin>>accuracy;

     while(number<accuracy)
    {

    exponent*=x;
     factorial*=number;

        e+=exponent/factorial;
       number++;
    }

    cout<<"e to the"<<x<<"is:"<<e<<endl;
}
