#include "scientist.h"

Scientist::Scientist()
{
    name = "";
    sex = "";
    bday = "";
    dday = "";
}

Scientist::Scientist(string inName, string inSex, string inBday, string inDday)
{
    name = inName;
    sex = inSex;
    bday = inBday;
    dday = inDday;
}

ostream& operator << (ostream& out, Scientist s){

  out<<s.name<<";"<<s.sex<<";"<<s.bday<<";"<<s.dday<<";";

    return out;
}
