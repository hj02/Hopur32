#ifndef SCIENTISTSERVICE_H
#define SCIENTISTSERVICE_H

#include "scientist.h"
#include "scientistrepository.h"
#include <vector>

class ScientistService
{
private:
    ScientistRepository scientistRepo;
public:
    ScientistService();
    void add(Scientist s);
    void read();
    void print();

};

#endif // SCIENTISTSERVICE_H
