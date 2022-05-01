#include <iostream>
#include <string>
#include <vector>

#include "Game.hpp"



using namespace std;

namespace coup
{   
    Game::Game()    //constructor
    {

    }

    string Game::turn()//reurn the name of the player who need to play 
    {
        return "player_name";
    }

    vector<string> Game::players()  //the players who active in the game 
    {
        vector<string> arr{"player_1", "player_2", "player_3", "player_4", "player_5"};
        return arr;
    }

    string Game::winner()   //return the winner, if the game active - > ERROR
    {
        return "player_name";
    }
}