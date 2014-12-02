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
    void sort();
    void sortName();
    void sortSex();
    void sortBday();
    void sortDday();
/*
    bool compareName(const Scientist& a,const Scientist& b);
    bool compareSex(const Scientist &a,const Scientist &b);
    bool compareBday(const Scientist &a,const Scientist &b);
    bool compareDday(const Scientist &a,const Scientist &b);*/


};

#endif // SCIENTISTREPOSITORY_H
