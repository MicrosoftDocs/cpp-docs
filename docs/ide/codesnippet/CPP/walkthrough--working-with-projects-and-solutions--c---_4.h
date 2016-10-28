#pragma once
class Cardgame
{
    int players;
    static int totalParticipants;
public:
    Cardgame(int players);
    ~Cardgame(void);
    static int GetParticipants() { return totalParticipants; }
};