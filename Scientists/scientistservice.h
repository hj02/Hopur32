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
    void add();
    void read();
    void print();
    void find();
    void write();
    void READ();
    void Sort();
    void stringToLower(string& str);
};


#endif // SCIENTISTSERVICE_H
