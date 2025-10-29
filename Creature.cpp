#include <iostream>
#include "Creature.h"

int Creature::totalCreatures = 0;

Creature::Creature(const std::string& name, int cost, CreatureType t, int atk,
                   int def)
    : Card(name, cost), type(t), attack(atk), defense(def) {
  // TODO: increment totalCreatures count
  totalCreatures++;
}

Creature::Creature(const Creature& other) 
    : Card(other.name, other.cost), type(other.type), 
      attack(other.attack), defense(other.defense) {
  // TODO: increment totalCreatures count
  totalCreatures++;
}

Creature::~Creature() {
  // TODO: decrement totalCreatures count
  totalCreatures--;
}

void Creature::printInfo() const {
  // TODO: print creature details in format:
  std::string typeName;
  switch(type) {
    case CreatureType::WARRIOR: typeName = "Warrior"; break;
    case CreatureType::MAGE: typeName = "Mage"; break;
    case CreatureType::ARCHER: typeName = "Archer"; break;
  }
  
  std::cout << "Creature - " << name << " (Cost " << cost << "): Creature Type=" 
            << typeName << ", Attack=" << attack << ", Defense=" << defense << std::endl;
}

int Creature::getAttack() const {
  // TODO
  return attack;
}

int Creature::getDefense() const {
  // TODO
  return defense;
}

Creature::CreatureType Creature::getCreatureType() const {
  // TODO
  return type;
}

int Creature::getTotalCreatures() {
  // TODO
  return totalCreatures;
}

// clone() method creates a deep copy of the Creature object using the copy constructor
Card* Creature::clone() const { 
  return new Creature(*this); 
}

// getType() method returns the Type for a Card object
Card::Type Creature::getType() const { 
  return Type::CREATURE; 
}