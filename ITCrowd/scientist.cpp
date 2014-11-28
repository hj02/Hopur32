//#include "scientist.h"
#include <string>
#include<iostream>


class Scientist{

   public:

                Scientist();

    private:
                std::string name;
                std::string sex;
                std::string bday;
                std::string dday;

};

Scientist::Scientist()
{
    name="";
    sex="";
    bday="";
    dday="";

}
