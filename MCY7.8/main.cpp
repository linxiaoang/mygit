#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    int i=0;
    int res=0;
   array<char,6>alphabet={'A','B','C','D','E','F'};
   cout<<alphabet[6]<<endl;
    array<int,6>grade;
 int x=0;
 cin>>x;
 grade[4]=x;
array<int,5>values={8,8,8,8,8};

array<double,100>temperatures;
for(unsigned i=0;i<=99;i++)
    {

      res+=temperatures[i];
    }
    cout<<"result is:"<<res;


    array<double,11>a;
    array<double,34>b;
    for(unsigned i=0;i<=10;i++)
    {
        b[i]=a[i];
        cout<<"b["<<i<<"]"<<"is"<<b[i]<<"\n";
    }
    array<double,99>w= {};
   for(;i<w.size();++i)
    {
        cin>>w[i];
      int min=w[0];
      if(w[i]<min)
        min=w[i];
    }
}



