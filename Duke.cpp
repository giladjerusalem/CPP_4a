#include <iostream>
#include <string>

#include "Duke.hpp"


using namespace std;

namespace coup
{
    Duke::Duke(Game &game, string player_name) : Player(game, player_name, "Duke")    //constructor
    {
        
    }

    void Duke::tax()    //can take tax of 3 coins from the cashier
    {

    }
    
    void Duke::block(Player &player)    //can block player income
    {

    }
}