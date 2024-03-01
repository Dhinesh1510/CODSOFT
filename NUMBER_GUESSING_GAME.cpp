#include<ctime>
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int num;
    int guess;
    int tries=0;
    srand(time(NULL)); // 
    num=(rand()% 100)+1;
    cout<<"***** NUMBER GUESSING GAME *****\n";
    do
    {
        cout<<"enter a guess between(1-100):";
        cin>>guess;
        tries++;
        if(guess>num)
        {
            cout<<"Too high!\n";
        }
        else if(guess< num)
        {
            cout<<"Too low!\n";
        }
        else{
          cout<<"CORRECT! # of tries: "<<tries<<'\n';  
        }
    } while (guess != num);
    cout<<"*********** GAME OVER !***************\n";
    return 0;
}