#include "./Enemy.h"

void Enemy::takeDamage(int damage) {
    Enemy::health -= damage;
}

bool Enemy::isAlive() {
    return Enemy::alive;
}