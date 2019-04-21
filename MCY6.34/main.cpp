#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void guessGame();
bool isCorrect(int a,int g);

    int main()
   {
    srand(time(0));
     guessGame();
   }
   void guessGame()
    {
     int guess=0;
     int answer=0;
     char response;
       do
        {
         answer=1+rand()%1000;
         cout<<"I have a number between 1 ang 1000.\n"<<"|Can you guess my number?"
         <<"\n"<<"Please type you first guess.";
           cin>>guess;
             while(!isCorrect(guess,answer))
            {
             cin>>guess;
             cout<<"Excellent!You guess the number!\n"<<"Would you like to play again(y or n)?";
             cin>>response;
            }
        }
            While(response=="y")
     }
      bool isCorrect(int g,int a)
      {
          if(g==a)
            return true;
          if(g<a)
            cout<<"Too low.Try again.\n";
          else
            cout<<"Too high.Try again.\n";
            return false;
      }

