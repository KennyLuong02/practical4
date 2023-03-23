#include <iostream>
#include <string.h>
#include "Person.h"

using namespace std;

PersonList deepCopyPersonList(PersonList pl) {
    // Original struct
    int n = 5;
    cout << "Original list:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Person " << i + 1 << ": " << pl.people[i].name << ", " << pl.people[i].age << endl;
    }

    //New struct
    PersonList p2;

    p2.people = new Person[n];
    p2.numPeople = n;

    for (int i = 0; i < n; i++) {
        p2.people[i].name = pl.people[i].name;
        p2.people[i].age = pl.people[i].age;
    }

    cout << "New list:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Person " << i + 1 << ": " << p2.people[i].name << ", " << p2.people[i].age << endl;
    }

    // delete[] p2.people;
    
    return p2;
}