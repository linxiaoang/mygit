#include <iostream>

using namespace std;
int factorial=1;
int number=1;
int accuracy=0;
double e=1.0;
int main()
{
    cout<<"Enter the accuracy  you want:";
    cin>>accuracy;

     while(number<accuracy)
    {

     factorial*=number;

        e+=1.0/factorial;
       number++;
    }

    cout<<"e is"<<e<<endl;
}
