#include <iostream>
#include <string>

#include "Ambassador.hpp"

using namespace std;

namespace coup
{
    Ambassador::Ambassador(Game &game, string name) : Player(game, name, "Ambassador")
    {
        
    }

    void Ambassador::transfer(Player &player_1, Player &player_2) //can transfer one coin from one player to another
    {

    }
    
    void Ambassador::block(Player &player)  //can block steal from captain
    {

    }
}