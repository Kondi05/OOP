#include "BattleGame.h"

int BattleGame::totalGamesPlayed = 0;
int BattleGame::totalDamageDealt = 0;
int BattleGame::player1Wins = 0;
int BattleGame::player2Wins = 0;

BattleGame::BattleGame(std::string p1Name, std::string p2Name) 
    : player1(p1Name), player2(p2Name), currentState(GameState::PLAYING) {
    
}

int BattleGame::calculateDamage(ActionType action) {
    switch(action) {
        case LIGHTATTACK:
            return 15;
        case HEAVYATTACK:
            return 30;
        case BLOCK:
            return 0;
        default:
            return 0;
    }
}

void BattleGame::resolveActions(ActionType p1Move, ActionType p2Move) {
    int p1Damage = calculateDamage(p1Move);
    int p2Damage = calculateDamage(p2Move);
    
    if (p1Damage > 0) {
        player2.takeDamage(p1Damage);
        totalDamageDealt += p1Damage;
    }
    
    if (p2Damage > 0) {
        player1.takeDamage(p2Damage);
        totalDamageDealt += p2Damage;
    }
}

void BattleGame::updateGameState() {
    bool p1Alive = player1.isAlive();
    bool p2Alive = player2.isAlive();
    
    if (!p1Alive && !p2Alive) {
        currentState = GameState::DRAW;
        totalGamesPlayed++;
    } else if (!p1Alive) {
        currentState = GameState::PLAYER2_WON;
        player2Wins++;
        totalGamesPlayed++;
    } else if (!p2Alive) {
        currentState = GameState::PLAYER1_WON;
        player1Wins++;
        totalGamesPlayed++;
    }
}

void BattleGame::executeTurn(ActionType p1Move, ActionType p2Move) {
    player1.setBlocking(p1Move == BLOCK);
    player2.setBlocking(p2Move == BLOCK);
    
    resolveActions(p1Move, p2Move);
    updateGameState();
}

void BattleGame::displayStatus() {
    std::cout << "\n=== Battle Status ===" << std::endl;
    std::cout << player1.getName() << " HP: " << player1.getHealth() << std::endl;
    std::cout << player2.getName() << " HP: " << player2.getHealth() << std::endl;
    std::cout << "===================\n" << std::endl;
}

GameState BattleGame::getGameState() {
    return currentState;
}

void BattleGame::displayStatistics() {
    std::cout << "\n=== Game Statistics ===" << std::endl;
    std::cout << "Total Games Played: " << totalGamesPlayed << std::endl;
    std::cout << "Total Damage Dealt: " << totalDamageDealt << std::endl;
    std::cout << "Player 1 Wins: " << player1Wins << std::endl;
    std::cout << "Player 2 Wins: " << player2Wins << std::endl;
    std::cout << "=======================\n" << std::endl;
}

int BattleGame::getTotalGamesPlayed() {
    return totalGamesPlayed;
}