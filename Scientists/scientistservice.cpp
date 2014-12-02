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

void ScientistService::find(){

    scientistRepo.find();

}

void ScientistService::write(){

    scientistRepo.write();
}

void ScientistService::READ(){

    scientistRepo.READ();
}
