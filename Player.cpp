#include <iostream>
#include <string>

#include "Player.hpp"
#include "Game.hpp"


using namespace std;

namespace coup
{
    Player::Player(Game &game, string player_name, string role)    //constructor
    {
        
    }

    void Player::income()   //1 coin - no interupt
    {

    }

    void Player::foreign_aid()  //2 coins - with interupt, other player can block
    {

    }

    void Player::coup(Player &player)   //which player to kick out of game, cost of 7 coins.
    {

    }

    string Player::role()   //func who return as a string the role of each player
    {
        return "role";
    }

    int Player::coins() //return the amout of coins the player have
    {
        int temp=0;
        return temp;
    }
    

}