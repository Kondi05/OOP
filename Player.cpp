#include "Player.h"

// Constructor implementation
Player::Player(std::string playerName) {
    name = playerName;
    health = 100;
    isBlocking = false;
}

// takeDamage implementation
void Player::takeDamage(int damage) {
    if (isBlocking) {
        damage = damage / 2;  // 50% damage reduction
        isBlocking = false;   // Blocking only lasts for one attack
    }
    
    health -= damage;
    
    // Ensure health doesn't go below 0
    if (health < 0) {
        health = 0;
    }
}

// Setter and getter implementations
void Player::setBlocking(bool blocking) {
    isBlocking = blocking;
}

bool Player::getIsBlocking() {
    return isBlocking;
}

int Player::getHealth() {
    return health;
}

std::string Player::getName() {
    return name;
}

bool Player::isAlive() {
    return health > 0;
}