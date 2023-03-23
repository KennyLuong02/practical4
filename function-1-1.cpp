#include <iostream>
#include <string.h>
#include "Person.h"

using namespace std;

Person* createPersonArray(int n) {
    Person* p = new Person[n];

    Person p1;
    p1.name = "John Doe";
    p1.age = 0;

    for (int i = 0; i < n; i++) {
        p[i] = p1;
    }

    // for (int i = 0; i < n; i++) {
    //     cout << p[i].name << " " << p[i].age << endl;
    // }

    // delete[] p;

    return p;
}