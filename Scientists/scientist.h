#ifndef SCIENTIST_H
#define SCIENTIST_H

#include <string>
#include <fstream>
#include <iostream>
#include <list>

using namespace std;

class Scientist
{
private:

    string nr;
    string name;
    string sex;
    string bday;
    string dday;


public:
    Scientist();
    Scientist(string NR, string inName, string inSex, string inBday, string inDday);

    // haegt er ad prenta eh af taginu Scientist audveldlega
    friend ostream& operator << (ostream& out, Scientist s);
    // naudsynleg foll til ad nota medlimabreyturnar lika i scientistrepository
    string getNr();
    string getName();
    string getSex();
    string getBday();
    string getDday();

    // foll til ad einfalda breytingu a Scientist
    void setNr(string NR);
    void setName(string n);
    void setSex(string s);
    void setBday(string b);
    void setDday(string d);


};

#endif // SCIENTIST_H
