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
    void read(); //les gogn ur skra og breytir i vektor þ.e vektorinn scientistVector (sem er private breyta)
    void print(); // prentar ut vektorinn scientistVector
    vector<Scientist> getVector(); //gaeti ordid hjalplegt fall-hefur ekki verid notad hingad til
    void setVector(vector<Scientist> v);// gaeti ordid hjalplegt fall-hefur ekki verid notad hingad til


};

#endif // SCIENTISTREPOSITORY_H
