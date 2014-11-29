#ifndef SCIENTISTSERVICE_H
#define SCIENTISTSERVICE_H

#include "scientist.h"
#include "scientistrepository.h"

class ScientistService
{
private:
    ScientistRepository scientistRepo;
public:
    ScientistService();
    void add(Scientist s);
};

#endif // SCIENTISTSERVICE_H
