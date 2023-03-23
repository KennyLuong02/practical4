#include <iostream>
#include <string.h>
#include "Person.h"

using namespace std;

PersonList createPersonList(int n) {
    // PersonList* p = new PersonList[n];

    PersonList p1;
    p1.people = new Person[n];

    p1.numPeople = n;

    for (int i = 0; i < n; i++) {
        p1.people[i].name = "Jane Doe";
        p1.people[i].age = 1;
    }

    for (int i = 0; i < n; i++) {
        cout << p1.people[i].name << " " << p1.people[i].age << endl;
    }

    cout << p1.numPeople << endl;

    delete[] p1.people;
    
    return p1;
}