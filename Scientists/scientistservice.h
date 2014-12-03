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
    void add();
    void read();
    void print();
    void find();
    void write();
    void READ();
    void Sort();
    void stringToLower(std::string& finding);
};


#endif // SCIENTISTSERVICE_H
