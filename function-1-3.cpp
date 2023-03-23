#include <iostream>
#include <string.h>
#include "Person.h"

using namespace std;

PersonList deepCopyPersonList(PersonList pl) {
   
    //New struct
    PersonList p2;
    p2.numPeople = pl.numPeople;
    p2.people=new Person[pl.numPeople];

    for (int i = 0; i < p2.numPeople; i++) {
        p2.people[i].name = pl.people[i].name;
        p2.people[i].age = pl.people[i].age;
    }

    
    return p2;
}