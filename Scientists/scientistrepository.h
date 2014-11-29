#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H

#include <vector>
#include "scientist.h"

using namespace std;

class ScientistRepository
{
private:
    vector<Scientist> scientistVector;
public:
    ScientistRepository();
    void add(Scientist s);

};

#endif // SCIENTISTREPOSITORY_H
