#include "scientistui.h"
using namespace std;

ScientistUI::ScientistUI()
{

}
void ScientistUI::start()
{
    string inp;
    vector<Scientist> v;

    cout << "Welcome to the Scientist database" << endl;
    cout << "Please choose between the following: " << endl;
    cout << "Enter: add to add a Scientist" << endl;
    cout << "Enter: read to add a Scientist" << endl;
    cout << "To quit the program Enter: Q" << endl;
    cout << "Choose now: "<<endl;


    Scientist s = Scientist();

    while(inp != "Q"){
        cin >> inp;



        if(inp == "add"){
            cout << "Name: ";
            cin >> s.name;
            cout << "Sex: ";
            cin >> s.sex;
            cout << "Born year: ";
            cin >> s.bday;
            cout << "Died year: ";
            cin >> s.dday;
            scientistService.add(s);
        }
        else if(inp == "read"){
            cout << endl;
            cout << "Name: " << s.name << endl;
            cout << "Sex: " << s.sex << endl;
            cout << "Born year: " << s.bday << endl;
            cout << "Year died: " << s.dday << endl;
        }
        cout << "Choose add, read or Q: ";
    }

}

