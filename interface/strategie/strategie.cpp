#include"strategie.hpp"
#include<iostream>
using namespace std;
// the founction of the restarted game
void Strategie::start() const
{
    int i = 0;
    cout<<"start game\n";
    int team1[10];
    int team2[10];
    for(i=0; i<10 ; i++)
    {
        int player1 = rand()%10 +1;
        team1[i]= player1;
    }
    for(i=0; i<10 ; i++)
    {
        int player2 = rand()%10 +1;
        team2[i]= player2;
    }
    cout<<"######################\n";
    int values1 = 0;
    int values2 = 0;
    cout<<"VAL1: pour le premier joueur\n";
    cout<<"VAL2: pour le deuxième joueur\n";
    cout<<"######################\n";
    cout<<"Each players must the one number between 1 and 10\n";
    cout<<"Our that goal is the two players have to guess the numbers to the each to another\n";
    cout<<"THE PLAYER WHO HAVE A LESS ZERO AT THE OF THE GAME IS THE BEGINNER\n";
    cout<<"######################\n\n";
    for(i=0; i<10; i++)
    {
        cout<<"###########"<<i+1 <<"tour###########\n";
        cout<<"PLAYER 1:";
        cin>>values1;
        for(int j=0; j<10; j++)
        {
            if(team2[j] == values1)
            {
                team2[j] = 0;
                break;
            }
        }
        cout<<"PLAYER 2:";
        cin>>values2;
        for(int j=0; j<10; j++)
        { 
            if(team1[j] == values2)
            {
                team1[j] = 0;
                break;
            }
        }
    }

    // The result of the game for the first player
    cout<<"RESULTs\n\n\n";
    cout<<"pour le premier joueur:"<<endl;
    for(i=0; i<10; i++)
    {
        cout<<team1[i]<<"\t";
    }

    // The result of the game for the second player
    cout<<"\n\n";
    cout<<"pour le deuxième joueur:"<<endl;
    for(i=0; i<10; i++)
    {
        cout<<team2[i]<<"\t";
    }
    cout<<"\n\n";
}

// the founction of the restarted game
void Strategie::restart() const
{
    cout<<"restart game\n";
    Strategie::start();
}

// the founction of the display
void Strategie::pause() const
{
    cout<<"pause\n";
}

// the founction of the played game
void Strategie::play() const 
{
    cout<<"play\n";
}

// the founction of the quit
void Strategie::quit() const
{
    cout<<"quit\n";
} 
Strategie::Strategie()
{
    
}
Strategie::~Strategie()
{

}

// function of the menu
void Strategie::menu() const
{
    cout<<"JEUX DE STRATEGIE\n";
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
            Strategie::start();
        }
        else if(i==2)
        {
            Strategie::restart();
        }
        else if(i==3)
        {
            Strategie::play();
        }        
        else if(i==4)
        {
            Strategie::pause();
        }
        else
        {
            Strategie::quit();
            break;
        }
        cout<<"###############\n\n";
    }
}