#include <iostream>
#include "./Enemy.h"

int main() {
    Enemy enemy;

    while(enemy.isAlive()) {
        std::cout << "Enemy health: " << enemy.getHealth() << std::endl;
        enemy.takeDamage(20);
    }
    
    std::cout << "Enemy died!" << std::endl;

    return 0;
}