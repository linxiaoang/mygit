#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0,t=0,sum=0,Average=0;
    cout<<"Input three different interges: ";
   cin>>a>>b>>c;
   sum=a+b+c;
   Average=sum/3;
   cout<<"Sum is "<<sum<<"\nAverage is "<<Average;

   if(a<b)
        t=a;
    if(b<=a)
        t=b;
    if(c<b)
        t=c;
    cout<<"\nSmallest is "<<t;
    if(a>b)
        t=a;
    if(b>=a)
        t=b;
    if(c>t)
        t=c;
   cout<<"\nLargest is "<<t;



}
