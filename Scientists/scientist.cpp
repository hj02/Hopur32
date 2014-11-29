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

