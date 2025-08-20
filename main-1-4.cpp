#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl);

int main() {
    // Create original list
    PersonList original;
    original.numPeople = 2;
    original.people = new Person[2];
    original.people[0] = {"Charlie", 35};
    original.people[1] = {"Diana", 28};
    
    // Create shallow copy
    PersonList copy = shallowCopyPersonList(original);
    
    // Modify original to test shallow copy
    original.people[0].name = "Modified";
    original.people[0].age = 99;
    
    // Test that copy is also modified (same memory)
    std::cout << "Original: " << original.people[0].name << ", " << original.people[0].age << std::endl;
    std::cout << "Copy: " << copy.people[0].name << ", " << copy.people[0].age << std::endl;
    
    // Only delete once since they share the same memory!
    delete[] original.people;
    // Don't delete copy.people - it's the same memory as original.people
    
    return 0;
}