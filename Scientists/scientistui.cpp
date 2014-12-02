#include "scientistui.h"
using namespace std;

ScientistUI::ScientistUI()
{

}
void ScientistUI::start()
{
    scientistService.read();
    string inp;
<<<<<<< HEAD
    scientistService.read();
=======
    Scientist s;
>>>>>>> 184f4fa18ca6b3cc3ed054f245a173d37e319a92

    cout << "Welcome to the SCIENTIST database" << endl;
    cout << "---------------------------------" << endl << endl;
    cout << "Please choose between the following: " << endl << endl;
    cout << "Enter: 'add' to add a Scientist" << endl;
    cout << "Enter: 'read' to read from the file" << endl;
    cout << "Enter: 'find' to find a scientist"<< endl;
    cout << "Enter: 'sort' to sort the scientists" << endl;
    cout << "Enter: 'Q' to quit" << endl << endl;
    cout << "Choose now: ";

    cin >> inp;

    while(inp != "Q" && inp != "q"){


        if(inp == "add"){
<<<<<<< HEAD

            scientistService.add();

=======
            scientistService.read();
            scientistService.add(s);
>>>>>>> 184f4fa18ca6b3cc3ed054f245a173d37e319a92
        }
        else if(inp == "read"){
           scientistService.READ();
        }
        else if(inp=="find"){

            scientistService.find();
        }
<<<<<<< HEAD
        if(inp=="sort"){

            scientistService.sort();

        }
        if(inp=="Q"){
=======
        else if(inp=="Q" || inp=="q"){
>>>>>>> 184f4fa18ca6b3cc3ed054f245a173d37e319a92

            break;
        }
        else{
            cout << "This is not a valid option!" << endl;
        }
        cout << endl <<"Choose add, read, find, sort or Q: ";
        cin >> inp;
    }

}

