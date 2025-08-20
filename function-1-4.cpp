#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList newList;
    newList.numPeople = pl.numPeople;
    newList.people = pl.people;  // Same memory address - shallow copy
    return newList;
}