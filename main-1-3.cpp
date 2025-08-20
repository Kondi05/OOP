#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl);

int main() {
    // Create original list
    PersonList original;
    original.numPeople = 2;
    original.people = new Person[2];
    original.people[0] = {"Alice", 25};
    original.people[1] = {"Bob", 30};
    
    // Create deep copy
    PersonList copy = deepCopyPersonList(original);
    
    // Modify original to test deep copy
    original.people[0].name = "Modified";
    original.people[0].age = 99;
    
    // Test that copy is unchanged
    std::cout << "Original: " << original.people[0].name << ", " << original.people[0].age << std::endl;
    std::cout << "Copy: " << copy.people[0].name << ", " << copy.people[0].age << std::endl;
    
    delete[] original.people;
    delete[] copy.people;
    return 0;
}