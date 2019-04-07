
using namespace std;

int main()
{
    cout<<"Terms          ¦°\n";
    double pi=0;
    int symbol;

    for(unsigned int i=1,denominator=1;i<=1000;i++,denominator+=2)
    {
        symbol=-1;
        for(int counter=1;counter<=i;counter++)
            symbol*=(-1);

        pi=pi+symbol*(4.0/denominator);

        cout<<"£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡\n"<<i<<"          "<<pi<<"\n";
    }
}
