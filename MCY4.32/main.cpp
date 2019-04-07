 #include <iostream>
 using namespace std;
 unsigned int a=0;
 unsigned int b=0;
 unsigned int c=0;
 int main()
 {
      cout<<"Enter three sides: ";
        cin>>a>>b>>c;
         if(a+b>c)
           {
             if(a+c>b)
             {
              if(b+c>a)
              cout<<"These can represent three sides of a triangle.";
            else
              cout<<"These can not represent three sides of a triangle."<<endl;
             }
            else
                 cout<<"These can not represent three sides of a triangle."<<endl;
            }
               else
            cout<<"These can not represent three sides of a triangle."<<endl;
}


