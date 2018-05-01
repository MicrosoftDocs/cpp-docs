//<snippet103>
#pragma once
class Cardgame
{
    //<snippet100>
    int players;
    static int totalParticipants;
    //</snippet100>
public:
    //<snippet101>
    Cardgame(int players);
    //</snippet101>
    ~Cardgame(void);
    //<snippet102>
    static int GetParticipants() { return totalParticipants; }
    //</snippet102>
};
//</snippet103>
