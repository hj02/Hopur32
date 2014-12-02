#include "scientistui.h"
#include <cctype>
using namespace std;

ScientistUI::ScientistUI()
{

}
void ScientistUI::start()
{
    scientistService.read();

    string inp;
    Scientist s;


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
    int a= inp.length();
    for(int i = 0; i < a; i ++)
    {
        inp[i] = tolower(inp[i]);

    }

    while(inp !="q"){

        if(inp == "add"){

          scientistService.add();

        }
        else if(inp == "read"){
           scientistService.READ();
        }
        else if(inp=="find"){

            scientistService.find();
        }
        else if(inp=="sort"){

            scientistService.Sort();

        }
        else if(inp=="q"){
           break;
        }

        else{
            cout << "This is not a valid option!" << endl;
        }
        cout << endl <<"Choose add, read, find, sort or Q: ";
        cin >> inp;
    }

}

