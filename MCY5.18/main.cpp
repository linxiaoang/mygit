#include <iostream>

using namespace std;

bool multiple(int number1,int number2)
{
    int result=0;
    result=number2%number1;
    if(result==0)
        return true;
    else
      return false;
}
    int main()
    {
        int x=0,y=0;
        cout<<"Enter the number:";
        cin>>x>>y;
        if(multiple(x,y))
            cout<<"y is multiple of x";
        else
            cout<<"y is not multiple of x";
    }


