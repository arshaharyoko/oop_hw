#ifndef H_BASECHARACTER
#define H_BASECHARACTER

class BaseCharacter {
    protected:
        float health = 100.0f;
        float damage = 20.0f;

    public:
        void attack(BaseCharacter* target);
};

#endif