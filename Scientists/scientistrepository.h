#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H

#include <vector>
#include "scientist.h"
#include <iostream>
#include <algorithm>

using namespace std;

class ScientistRepository
{
private:
    vector<Scientist> scientistVector;
    void firstToUpper(string& finding, int lengd);
    void stringToLower(int lengd, string& finding);
    void sortName();
    void sortSex();
    void sortBday();
    void sortDday();



public:
    ScientistRepository();
    void add();
    void read(); //les gogn ur skra og breytir i vektor þ.e vektorinn scientistVector (sem er private breyta)
    void print(); // prentar ut vektorinn scientistVector
    void find();
    void write();
    vector<Scientist> getVector(); //gaeti ordid hjalplegt fall-hefur ekki verid notad hingad til
    void setVector(vector<Scientist> v);// gaeti ordid hjalplegt fall-hefur ekki verid notad hingad til
    void READ();
    void Sort();

};

#endif // SCIENTISTREPOSITORY_H
