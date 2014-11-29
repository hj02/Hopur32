#include "scientistui.h"
using namespace std;

ScientistUI::ScientistUI()
{

}
void ScientistUI::start()
{
    string inp;
    cout << "Welcome to the Scientist database" << endl;

    if(inp == "add"){
        Scientist s = Scientist();
        cin >> s.name >> s.sex >> s.bday >> s.dday;
        scientistService.add(s);
    }
}
