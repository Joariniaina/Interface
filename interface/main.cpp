#include"combat/combat.hpp"
#include"strategie/strategie.hpp"
#include"football/football.hpp"
#include<iostream>
using namespace std;
int main()
{
    Combat *kata = new Combat();
    Strategie strategie;
    Football soccer;
    kata->menu();
    cout<<"######\n\n";
    strategie.menu();
    cout<<"######\n\n";
    soccer.menu();
    return 0;
}