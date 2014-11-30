#include "scientistservice.h"
#include "scientist.h"

ScientistService::ScientistService()
{
    scientistRepo = ScientistRepository();
}

void ScientistService::add(Scientist s)
{
    scientistRepo.add(s);
}

void ScientistService::read(){

    scientistRepo.read();
}

void ScientistService::print(){


   scientistRepo.print();

}
