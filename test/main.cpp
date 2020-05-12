#define CATCH_CONFIG_MAIN

#include "../src/header.h"
#include "../thirdparty/catch.hpp"
#include <string>
using namespace std;

char board[9][9] = {{'1', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                    {'2', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                    {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'7', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                    {'8', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                    {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

TEST_CASE("Move_Pawntrue", "Correct")
{
    int checking = 0;
    char movement[6] = "e2-e4";
    REQUIRE(CorrectInput( movement,board,checking) == true);
}

TEST_CASE("Move_Pawntrue", "Incorrect")
{
    int checking = 0;
    char movement[6] = "b8-b9";
    REQUIRE(CorrectInput( movement,board,checking) == false);
}
