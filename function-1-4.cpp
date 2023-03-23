#include <iostream>
#include <string.h>
#include "Person.h"

using namespace std;

PersonList shallowCopyPersonList(PersonList pl) {
    // Original struct
    int n = 5;
    for (int i = 0; i < n; i++) {
        cout << pl.people[i].name << " " << pl.people[i].age << endl;
    }

    cout << pl.numPeople << endl;
    cout << endl;

    //New struct
    PersonList p2;

    p2 = pl;
    // p2.numPeople = n;

    // for (int i = 0; i < n; i++) {
    //     p2.people[i].name = &pl.people[i].name;
    //     p2.people[i].age = pl.people[i].age;
    // }

    for (int i = 0; i < n; i++) {
        cout << p2.people[i].name << " " << p2.people[i].age << endl;
    }

    cout << p2.numPeople << endl;

    // delete[] p2.people;
    
    return p2;
}