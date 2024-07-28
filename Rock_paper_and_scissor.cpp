#include <iostream>
#include <time.h>
using namespace std;
                   
int main()
{
   int player1;
   string player1name;
   int player1points=0;
   int player2points=0;
   cout<<"\t   ROCK,PAPER AND SCISSORS GAME"<<endl;
   cout<<"enter player 1 name:";
   cin>>player1name;
   cout<<"\tIMPORTANT"<<endl;
   cout<<"\t select 1 for rock"<<endl;
   cout<<"\t select 2 for paper"<<endl;
   cout<<"\t select 3 for scissors"<<endl;
   // if there is no final winner game will restart the control will be brought to 'retry:'
   retry:
   // seed the random number generator
   srand(time(0));
   for (int i = 1; i <= 3; i++)
   {// takin player1's input
      cout<<" Player 1 enter your choice : ";
      cin>>player1;
      //generating choice for player2
      int player2= rand() % 3 + 1;
      cout<<" player 2 choice : "<<player2<<endl;
      // determine the winner of each round
      if(player1 == 1 && player2 == 3 || player1 == 2 && player2 == 1 || player1 == 3 && player2 == 2){
        cout<<"player 1 wins "<<i<<" round"<<endl;
        player1points++; 
      }
      else if(player1 == player2){
        cout<<"its a tie no alter in points"<<endl;
      }
      else{
        cout<<"player 2 wins "<<i<<" round"<<endl;
        player2points++;
      }
   } 
   // declaring the final points
   cout<<" player 1:"<<player1name<<"'s point :"<<player1points<<endl;
   cout<<" player 2:computer's point:"<<player2points<<endl;
   //determining and declaring the ulyimate winner
   if (player1points > player2points){
    cout<<" player 1:"<<player1name<<" wins the game"<<endl;
   }
   else if( player1points == player2points){
    cout<<"its a tie play again"<<endl;
    goto retry;
   }
   else{
    cout<<"player 2:computer wins the game"<<endl;
   }
return 0;
}