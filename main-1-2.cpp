#include <iostream>
#include "Person.h"

extern Person* createPersonList(int n);

using namespace std;

int main() {
    int n = 5;

    createPersonList(n);

    return 0;

}