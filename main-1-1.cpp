#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

using namespace std;

int main() {
    int n = 5;

    createPersonArray(n);

    return 0;

}