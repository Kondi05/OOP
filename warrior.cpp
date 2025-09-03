#include "warrior.h"
#include <iostream>

Warrior::Warrior(std::string name, int health, int damage, std::string weapon) 
    : Player(name, health, damage), weapon(weapon) {}

void Warrior::swingWeapon(Player* opponent) {
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    attack(opponent, damage);
}

std::string Warrior::getWeapon() const { return weapon; }
void Warrior::setWeapon(std::string weapon) { this->weapon = weapon; }