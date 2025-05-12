#ifndef H_ENEMY_BASECHARACTER
#define H_ENEMY_BASECHARACTER
#include "./BaseCharacter.h"

class Enemy:BaseCharacter {
    private:
        bool alive = true;

    public:
        void takeDamage(int damage);
        bool isAlive();
};

#endif