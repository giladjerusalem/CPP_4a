#include <iostream>
#include <vector>
#include <stdexcept>
#include "Game.hpp"
#include "Player.hpp"
#include "Ambassador.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"
#include "doctest.h"

using namespace coup;
using namespace std;

TEST_CASE("")
{
    Game game{};
	Duke D{game, "player1"};
	Assassin AS{game, "player2"};
	Ambassador AM{game, "player3"};
	Captain CA{game, "player4"};
	Contessa CO{game, "player5"};

    string s = game.turn();
    CHECK_EQ(s.compare("player3"),0);
    
    CHECK_EQ(AS.coins(), 0);
    CHECK_EQ(AM.coins(), 0);
    CHECK_EQ(CA.coins(), 0);
    CHECK_EQ(CO.coins(), 0);
    CHECK_EQ(D.coins(), 0);
    CHECK_NOTHROW(D.income());


}

TEST_CASE("Players && players func")
{
    Game game{};
	
    Ambassador AM{game, "player_1"};
	Assassin AS{game, "player_2"};
	Captain CA{game, "player_3"};
	Contessa CO{game, "player_4"};
	Duke D{game, "player_5"};
    

    vector<string> arr_1{"player_1", "player_2", "player_3", "player_4", "player_5"};
    vector<string> arr_2 = game.players();

    CHECK_EQ(arr_1[0].compare(arr_2[0]),0);
    CHECK_EQ(arr_1[1].compare(arr_2[1]),0);
    CHECK_EQ(arr_1[2].compare(arr_2[2]),0);
    CHECK_EQ(arr_1[3].compare(arr_2[3]),0);
    CHECK_EQ(arr_1[4].compare(arr_2[4]),0);

}

TEST_CASE("winner && income && coup functions")
{
    Game game{};
    Ambassador AM {game, "Gilad"};
	Assassin AS{game, "David"};
    Captain CA {game, "Shir"};
	Contessa CO{game, "Ori"};
    Duke D{game, "Liora"};
    

    CHECK_NOTHROW(AM.income());
    CHECK_NOTHROW(AS.income());
    CHECK_NOTHROW(CA.income());
    CHECK_NOTHROW(CO.income());
    CHECK_NOTHROW(D.income());
    CHECK_NOTHROW(AM.income());
    CHECK_NOTHROW(AS.income());
    CHECK_NOTHROW(CA.income());
    CHECK_NOTHROW(CO.income());
    CHECK_THROWS(D.income());

    CHECK_THROWS(game.winner());

    CHECK_NOTHROW(AS.coup(AS));
    CHECK_NOTHROW(AS.coup(AM));
    CHECK_NOTHROW(AS.coup(CA));
    CHECK_NOTHROW(AS.coup(CO));
    CHECK_NOTHROW(AS.coup(D));

    CHECK_NOTHROW(game.winner());



}

