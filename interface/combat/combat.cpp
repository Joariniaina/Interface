#include"combat.hpp"
#include<iostream>
using namespace std;
void Combat::start() const
{
    cout<<"start game\n";
}
void Combat::restart() const
{
    cout<<"restart game\n";
    Combat::start();
}
void Combat::pause() const
{
    cout<<"pause\n";
}
void Combat::play() const 
{
    cout<<"play\n";
}
void Combat::quit() const
{
    cout<<"quit\n";
} 
Combat::Combat()
{
    
}
Combat::~Combat()
{

}
void Combat::menu() const
{
    cout<<"JEUX DE COMBAT\n";
    int i;
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
            Combat::start();
        }
        else if(i==2)
        {
            Combat::restart();
        }
        else if(i==3)
        {
            Combat::play();
        }        
        else if(i==4)
        {
            Combat::pause();
        }
        else
        {
            Combat::quit();
            break;
        }
        cout<<"###############\n\n";
    }
}