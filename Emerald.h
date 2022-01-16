#ifndef EMERALD_H_INCLUDED
#define EMERALD_H_INCLUDED

#include "Monster.h"

class Emerald : public Monster
{
public:
    Emerald(std::vector<int> path) : Monster(path)
    {
        direction_count[LEFT] = 5;
        direction_count[RIGHT] = 5;

        HealthPoint = 20;
        speed = 25;
        worth = 10;
        score = 50;
        strncpy(class_name, "Emerald", 20);

        Load_Move();
    }

};


#endif // EMERALD_H_INCLUDED

