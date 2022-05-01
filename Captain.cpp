#include <iostream>
#include <string>

#include "Captain.hpp"


using namespace std;

namespace coup
{
    Captain::Captain(Game &game, string player_name) : Player(game, player_name, "Captain")   //constructor
    {
        
    }

    void Captain::steal(Player &player)     //can steal 2 coins, can be blocked by captain \ ambassador
    {

    }
    
    void Captain::block(Player &player)     //can b;ock steal of another captain
    {

    }
}