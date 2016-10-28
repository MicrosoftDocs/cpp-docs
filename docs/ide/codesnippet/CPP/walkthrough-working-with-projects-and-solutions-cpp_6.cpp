// TestGames.cpp
#include "Cardgame.h"
#include <iostream>

using namespace std;

void PlayGames()
{
    Cardgame bridge(4);
    Cardgame blackjack(8);
    Cardgame solitaire(1);
    Cardgame poker(5);
}

int main()
{
    PlayGames();

    return 0;
}