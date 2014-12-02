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

  out<< s.name<<";"<<s.sex<<";"<<s.bday<<";"<<s.dday<<";"<<endl;

    return out;
}


string Scientist::getName(){
    return name;
}

string Scientist::getSex(){
    return sex;
}

string Scientist::getBday(){
    return bday;
}

string Scientist::getDday(){
    return dday;
}


void Scientist::setName(string n){

    name=n;
}

void Scientist::setSex(string s){
    sex=s;
}

void Scientist::setBday(string b){
    bday=b;
}

void Scientist::setDday(string d){
    dday=d;
}


