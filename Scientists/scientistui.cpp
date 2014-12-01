#include "scientistui.h"
using namespace std;

ScientistUI::ScientistUI()
{

}
void ScientistUI::start()
{

   string inp,n,sex,b,d;
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
            cin >> n;
            s.setName(n);
            cout << "Sex: ";
            cin >> sex;
            s.setSex(sex);
            cout << "Born year: ";
            cin >>b;
            s.setBday(b);
            cout << "Died year: ";
            cin >> d;
            s.setDday(d);
            scientistService.add(s);
        }
        else if(inp == "read"){
            cout << endl;
            cout << "Name: " << s.getName() << endl;
            cout << "Sex: " << s.getSex() << endl;
            cout << "Born year: " << s.getBday() << endl;
            cout << "Year died: " << s.getDday() << endl;
        }
        cout << "Choose add, read or Q: ";
    }

}

