#ifndef SCIENTISTUI_H
#define SCIENTISTUI_H

#include "scientistservice.h"
#include <string>
#include <iostream>

class ScientistUI
{
public:
    ScientistUI();
    void start();
private:
    ScientistService scientistService;
};

#endif // SCIENTISTUI_H
