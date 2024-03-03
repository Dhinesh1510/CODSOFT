#include<iostream>
#include<ctime>
using namespace std;
void drawboard(char *spaces);
void first_playermove(char *spaces,char player1);
void second_playermove(char *spaces,char player2);
bool checkwinner(char *spaces,char player1,char player2);
bool check_tie(char*spaces);
int main()
{
    char spaces[9]= {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player1='x';
    char player2='o';
    bool running= true;
    drawboard(spaces);
    while(running){
       first_playermove(spaces,player1);
       drawboard(spaces);
       if(checkwinner(spaces,player1,player2)){
           running = false;
           break;
       }
       else if(check_tie(spaces))
       {
          running = false;
           break;
       }
       second_playermove(spaces,player2);
       drawboard(spaces);
     if(checkwinner(spaces,player1,player2))
     {
           running = false;
           break;
       }
    else if(check_tie(spaces))
       {
          running = false;
           break;
       }
    }
    cout<<"THANKS FOR PLAYING!\n";
return 0;

}
void drawboard(char *spaces)
{
   cout<<'\n';
   cout<<"     |     |     "<<'\n';
   cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |   "<<spaces[2]<<"  "<<'\n';
   cout<<"_____|_____|_____"<<'\n';
   cout<<"     |     |     "<<'\n';
   cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |   "<<spaces[5]<<"  "<<'\n';
   cout<<"_____|_____|_____"<<'\n';
   cout<<"     |     |     "<<'\n';
   cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |   "<<spaces[8]<<"  "<<'\n';
   cout<<"     |     |     "<<'\n';
   cout<<'\n';
}
void  first_playermove(char *spaces,char player1)
{
   int number;
   do{
       cout<<"player-1 enter a spot to place a marker(1-9): ";
       cin>> number;
       number--;
       if(spaces[number]== ' ')
       {
        spaces[number]= player1;
        break;
       }
   }while(!number > 0|| !number< 8);
}
void second_playermove(char *spaces,char player2)
{
  
      int number;
   do{
       cout<<"player-2 enter a spot to place a marker(1-9): ";
       cin>> number;
       number--;
       if(spaces[number]== ' ')
       {
        spaces[number]= player2;
        break;
       }
   }while(!number > 0|| !number< 8);
}
bool checkwinner(char *spaces,char player1,char player2)
{
    if((spaces[0] != ' ' ) && (spaces[0]== spaces[1] ) && (spaces[1] == spaces[2]))
    {
        spaces[0] == player1 ? cout<<"player_1  WIN!\n" : cout<<"player_1 LOSE!\n";
         spaces[0] == player2 ? cout<<"player_2 WIN!\n" : cout<<"player_2 LOSE!\n";
    }
    else if((spaces[3] != ' ' ) && (spaces[3]== spaces[4] ) && (spaces[4] == spaces[5]))
    {
        spaces[3] == player1 ? cout<<"player_1 WIN!\n" : cout<<"player_1 LOSE!\n";
         spaces[3] == player2 ? cout<<"player_2 WIN!\n" : cout<<"player_2 LOSE!\n";
    }
    else if((spaces[6] != ' ' ) && (spaces[6]== spaces[7] ) && (spaces[7] == spaces[8]))
    {
        spaces[6] == player1 ? cout<<"player_1 WIN!\n" : cout<<"player_1 LOSE!\n";
         spaces[6] == player2 ? cout<<"player_2 WIN!\n" : cout<<"player_2 LOSE!\n";
    }
    else if((spaces[0] != ' ' ) && (spaces[0]== spaces[3] ) && (spaces[3] == spaces[6]))
    {
        spaces[0] == player1 ? cout<<"player_1 WIN!\n" : cout<<"player_1 LOSE!\n";
         spaces[0] == player2 ? cout<<"player_2 WIN!\n" : cout<<"player_2 LOSE!\n";
    }
    else if((spaces[1] != ' ' ) && (spaces[1]== spaces[4] ) && (spaces[4] == spaces[7]))
    {
        spaces[1] == player1 ? cout<<"player_1 WIN!\n" : cout<<"player_1 LOSE!\n";
         spaces[1] == player2 ? cout<<"player_2 WIN!\n" : cout<<"player_2 LOSE!\n";
    }
       else if((spaces[2] != ' ' ) && (spaces[2]== spaces[5] ) && (spaces[5] == spaces[8]))
    {
        spaces[2] == player1 ? cout<<"player_1 WIN!\n" : cout<<"player_1 LOSE!\n";
         spaces[2] == player2 ? cout<<"player_2 WIN!\n" : cout<<"player_2 LOSE!\n";
    
    }
       else if((spaces[0] != ' ' ) && (spaces[0]== spaces[4] ) && (spaces[4] == spaces[8]))
    {
        spaces[0] == player1 ? cout<<"player_1 WIN!\n" : cout<<"player_1 LOSE!\n";
         spaces[0] == player2 ? cout<<"player_2 WIN!\n" : cout<<"player_2 LOSE!\n";
    }
       else if((spaces[2] != ' ' ) && (spaces[2]== spaces[4] ) && (spaces[4] == spaces[6]))
    {
        spaces[2] == player1 ? cout<<"player_1 WIN!\n" : cout<<"player_1 LOSE!\n";
         spaces[2] == player2 ? cout<<"player_2 WIN!\n" : cout<<"player_2 LOSE!\n";
    }
    else{
        return false;
    }
 return true;

}
bool check_tie(char*spaces)
 {
    for(int i=0;i<9;i++)
    {
        if(spaces[i]==' ')
        {
            return false;
        }
    }
    cout<<"IT'S A TIE!\n";
    return true;
 }
