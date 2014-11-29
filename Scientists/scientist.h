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


public:
    Scientist();
    Scientist(string inName, string inSex, string inBday, string inDday);
    string name;
    string sex;
    string bday;
    string dday;
    friend ostream& operator << (ostream& out, Scientist s);
    string getName();
    string getSex();
    string getBday();
    string getDday();
    void setName(string n);
    void setSex(string s);
    void setBday(string b);
    void setDday(string d);

};

#endif // SCIENTIST_H
