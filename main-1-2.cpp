#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);

int main() {
    int n = 3;
    PersonList list = createPersonList(n);
    
    // Test the function
    for (int i = 0; i < list.numPeople; i++) {
        std::cout << "Person " << i << ": " << list.people[i].name << ", " << list.people[i].age << std::endl;
    }
    
    delete[] list.people;
    return 0;
}