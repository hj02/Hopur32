#include "scientistui.h"
using namespace std;

ScientistUI::ScientistUI()
{

}
void ScientistUI::start()
{
    scientistService.read();
    string inp;
    Scientist s;

    cout << "Welcome to the Scientist database" << endl;
    cout << "Please choose between the following: " << endl;
    cout << "Enter: 'add' to add a Scientist" << endl;
    cout << "Enter: 'read' to read from the file" << endl;
    cout << "Enter: 'find' to find a scientist"<< endl;
    cout << "Enter: 'sort' to sort the scientists" << endl;
    cout << "To quit the program Enter: Q" << endl;
    cout << "Choose now: ";

    cin >> inp;

    while(inp != "Q" && inp != "q"){


        if(inp == "add"){
            scientistService.read();
            scientistService.add(s);
        }
        if(inp == "read"){
           scientistService.READ();
        }
        if(inp=="find"){

            scientistService.find();
        }
        if(inp=="Q" || inp=="q"){

            break;
        }
        cout << "Choose add, read, find, sort or Q: ";
        cin >> inp;
    }

}

