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

TEST_CASE("movePawn_1", "Correct pawn move")
{
    int checking = 0;
    char mowement[6] = "e2-e4";
    REQUIRE(CorrectInput(mowement, board, checking) == true);
}

TEST_CASE("movePawn_2", "Incorrect pawn move")
{
    int checking = 0;
    char mowement[6] = "c8-c9";
    REQUIRE(CorrectInput(mowement, board, checking) == false);
}

TEST_CASE("CorrectMovePiece", "Correct")
{
    int checking = 1;
    char mowement[7] = "Bc8-c6";
    REQUIRE(CorrectInput(mowement, board, checking) == true);
}

TEST_CASE("IncorrectMovePiece", "Incorrect")
{
    int checking = 1;
    char mowement[7] = "Qc8-c9";
    REQUIRE(CorrectInput(mowement, board, checking) == false);
}
