#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H


#include "scientist.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>


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
    bool nameComparator(Scientist a, Scientist b);
    bool sexComparator(Scientist a, Scientist b);
    bool bdayComparator(Scientist a, Scientist b);
    bool ddayComparator(Scientist a, Scientist b);



public:
    ScientistRepository();
    void add();
    void read();
    void print();
    void find();
    void write();
    void READ();
    void Sort();
    void stringToLower(string& finding);

};

#endif // SCIENTISTREPOSITORY_H
