#include<iostream>
using namespace std;
unsigned int a=0;
unsigned int b=0;
unsigned int c=0;
int main()
{
 cout<< "Please enter the three sides: ";
   cin>>a>>b>>c;
  if(a*a+b*b==c*c)
 cout<<"They can represent three sides of a right triangle.";
  else if(a*a+c*c==b*b)
            cout<<"They can represent three sides of a right triangle.";
    else if(b*b+c*c==a*a)
           cout<<"They can represent three sides of a right triangle.";
 else
cout<<"They can not represent three sides of a right triangle."<<endl;
}
