#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H

#include "scientist.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

class ScientistRepository
{
private:
    vector<Scientist> scientistVector;
    void firstToUpper(string& finding);
    void sortName();
    void sortSex();
    void sortBday();
    void sortDday();



public:
    ScientistRepository();
    void add();
    void read();
    // void print();
    void find();
    void write();
    void READ();
    void Sort();
    void stringToLower(string& finding);



};

#endif // SCIENTISTREPOSITORY_H
