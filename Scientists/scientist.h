#ifndef SCIENTIST_H
#define SCIENTIST_H

#include <string>
#include <fstream>
#include <iostream>
#include <list>

using namespace std;

class Scientist
{
public:
    Scientist();
    Scientist(string inName, string inSex, string inBday, string inDday);
    string name;
    string sex;
    string bday;
    string dday;

};

#endif // SCIENTIST_H
