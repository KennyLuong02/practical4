#include <iostream>
#include <string.h>
#include "Person.h"

using namespace std;

PersonList shallowCopyPersonList(PersonList pl) {

    PersonList p2 = pl;
    
    return p2;
}