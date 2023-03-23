#include <iostream>
#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);

using namespace std;

int main() {
    int n = 5;
    PersonList pl;

    pl.people = new Person[n];
    pl.numPeople = n;

    for (int i = 0; i < n; i++) {
        pl.people[i].name = "Jane Doe";
        pl.people[i].age = 1;
    }

    shallowCopyPersonList(pl);

    delete[] pl.people;

    return 0;

}