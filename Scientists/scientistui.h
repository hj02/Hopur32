#ifndef SCIENTISTUI_H
#define SCIENTISTUI_H

#include <string>
#include <iostream>
#include "scientistservice.h"
#include <vector>

class ScientistUI
{
public:
    ScientistUI();
    void start();
private:
    ScientistService scientistService;
};

#endif // SCIENTISTUI_H
