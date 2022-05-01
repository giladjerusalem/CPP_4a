#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>
#include <string>

#include "Game.hpp"


using namespace std;

namespace coup
{
    class Player
    {
        private:
            string player_name;
            string the_role;
            int coins_amount;
            Game game;
            
        public:
            Player(Game &game, string, string);
            void income();
            void foreign_aid();
            void coup(Player &player);
            string role();
            int coins();
    };
}

#endif