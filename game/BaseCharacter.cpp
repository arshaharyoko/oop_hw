#include "./BaseCharacter.h"

void BaseCharacter::attack(BaseCharacter* target) {
    target->health -= BaseCharacter::damage;
}