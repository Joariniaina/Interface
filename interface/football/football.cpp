#include"football.hpp"
#include<iostream>
using namespace std;
// the founction of the restarted game
void Football::start() const
{
    int i = 0;
    cout<<"start game\n";
    cout<<"######################\n";
    int values1 = 0;
    int values2 = 0;
    int score1 = 0;
    int score2= 0;
    cout<<"VALUES1: for the first player\n";
    cout<<"VALUES2: for the second player\n";
    cout<<"######################\n";
    cout<<"Each players must the one number between 1 and 10\n";
    cout<<"Our that goal is the two players have to guess the numbers to the each to another\n";
    cout<<"THE PLAYER WHO HAVE A LESS ZERO AT THE OF THE GAME IS THE BEGINNER\n";
    cout<<"######################\n\n";
    for(i=0; i<5; i++)
    {
        cout<<"###########"<<i+1 <<"tour###########\n";
        cout<<"PLAYER 1:";
        cin>>values1;
        int player2 = rand()%5 +1;
        // for the player 1
        if(values1 == player2 || values1> 5 || values1<1)
        {
            cout<<"WRONG\n";
        }
        else if(values1 != player2 && values1<= 5 || values1>=1)
        {
            cout<<"GOAL\n";
            score1 = score1 + 1;
        }

        // for the player 2
        cout<<"##############\n";
        cout<<"PLAYER 2:";
        cin>>values2;
        int player1 = rand()%5 +1;
        if(values1 == player1 || values1> 5 || values1<1)
        {
            cout<<"WRONG\n";
        }
        else if(values1 != player1 && values1<= 5 || values1>=1)
        {
            cout<<"GOAL\n";
            score2 = score2 + 1;
        }
    }

    // The result of the game for the first player
    cout<<"RESULTs\n\n";
    cout<<"PLAYER1: "<<score1<<"  VS  PLAYER2: "<<score2<<endl; 
    cout<<"\n\n";
}

// the founction of the restarted game
void Football::restart() const
{
    cout<<"restart game\n";
    Football::start();
}

// the founction of the display
void Football::pause() const
{
    cout<<"pause\n";
}

// the founction of the played game
void Football::play() const 
{
    cout<<"play\n";
}

// the founction of the quit
void Football::quit() const
{
    cout<<"quit\n";
} 
Football::Football()
{
    
}
Football::~Football()
{

}

// function of the menu
void Football::menu() const
{
    cout<<"JEUX DE TIR AU BUT\n";
    int i;
    // "boucle infinie"
    while(1)
    {
        cout<<"1:start\n";
        cout<<"2:restart\n";
        cout<<"3:play\n";
        cout<<"4:pause\n";
        cout<<"5:quit\n";
        cout<<"enter your choice:";
        cin>>i;
        if(i==1)
        {
            Football::start();
        }
        else if(i==2)
        {
            Football::restart();
        }
        else if(i==3)
        {
            Football::play();
        }        
        else if(i==4)
        {
            Football::pause();
        }
        else
        {
            Football::quit();
            break;
        }
        cout<<"###############\n\n";
    }
}