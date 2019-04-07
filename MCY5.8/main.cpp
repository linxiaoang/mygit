#include <iostream>

using namespace std;
unsigned int counter=0;
int smallest=0;
int number=0;

int main()
{
    cout<<"Enter the number of integers and the integers:\n";
    cin>>counter;
    cin>>number;
    smallest=number;
    for(unsigned int i=1;i<counter;i++)
    {
        cin>>number;
        if(number<smallest)
            smallest=number;
    }
    cout<<"The smasllest integer is "<<smallest<<"."<<endl;
}
