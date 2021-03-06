#include "scientistrepository.h"

using namespace std;


ScientistRepository::ScientistRepository()
{
    scientistVector = vector<Scientist>();
}

void ScientistRepository::add()
{
        Scientist s;
        string n,sex,b,d;


          cout << endl;
          cout << "Name: ";
          cin.ignore();
          getline(cin, n);
          stringToLower(n);
          firstToUpper(n);
          s.setName(n);

          cout << "Sex: ";
          getline(cin, sex);
          stringToLower(sex);
          s.setSex(sex);

          cout << "Date of birth: ";
          getline(cin, b);
          s.setBday(b);

          cout << "Date of death: ";
          getline(cin, d);
          s.setDday(d);

          scientistVector.push_back(s);

          write();
}


void ScientistRepository::read(){

    string file,line;
    //cin >> file;
    file = "file.txt";

    ifstream in(file.c_str());

    if(!in.is_open()){

        cout << "The file didn't open!" << endl;
    }

    else{
        Scientist s;
        //cout <<"Success! The file is open!"<< endl;
        getline(in,line,';');

        while(!in.eof()){
        for(int j=0; j<4; j++){

            if(j==0){
                s.setName(line);

            }
            if(j==1){
                s.setSex(line);
            }
            if(j==2){
                s.setBday(line);
            }
            if(j==3){
                s.setDday(line);
                scientistVector.push_back(s); // allar medlimabreytur s hafa verid lesnar inn svo við baetum s inni vektorinn okkar og byrjum uppa nytt
                in.ignore();// ignora endl
            }
             getline(in,line,';');
          }
        }

        in.close(); // loka skránni
    }
}


/*void ScientistRepository::print(){

    int a=scientistVector.size();

    for(int i=0; i<a; i++){
        cout<< scientistVector[i];
    }

}*/

void ScientistRepository::find()
{
    int co = 0;
    cout << endl << "Scientist would you like to find: ";
    string finding;
    int  a = scientistVector.size();

    cin.ignore();
    getline(cin, finding);

    stringToLower(finding);

    firstToUpper(finding);


    for(int i = 0; i < a; i++)
       {

           if(finding == scientistVector[i].getName())
           {
               co =  co + 1;
               if(co == 1)
               {
                       cout << endl << "Scientists which matched your search: "<< endl;
               }

               cout << endl;
               cout << "Name: " << scientistVector[i].getName() << endl;
               cout << "Sex: "<< scientistVector[i].getSex() << endl;
               cout << "Birthday: "<< scientistVector[i].getBday() << endl;
               cout << "Date of death: "<< scientistVector[i].getDday()<< endl;
               cout << endl;

           }

           else{

               finding[0]=tolower(finding[0]);

           }
           if(finding == scientistVector[i].getSex())
           {
               co =  co + 1;
               if(co == 1)
               {
                       cout << endl << "Scientists which matched your search: "<< endl;
               }

               cout << "Name: " << scientistVector[i].getName() << endl;
               cout << "Sex: "<< scientistVector[i].getSex() << endl;
               cout << "Birthday: "<< scientistVector[i].getBday() << endl;
               cout << "Date of death: "<< scientistVector[i].getDday()<< endl;
               cout << endl;
           }
           if(finding == scientistVector[i].getBday())
           {
               co =  co + 1;
               if(co == 1)
               {
                       cout << endl << "Scientists which matched your search: "<< endl;
               }

               cout << "Name: " << scientistVector[i].getName() << endl;
               cout << "Sex: "<< scientistVector[i].getSex() << endl;
               cout << "Birthday: "<< scientistVector[i].getBday() << endl;
               cout << "Date of death: "<< scientistVector[i].getDday()<< endl;
               cout << endl;
           }
           if(finding == scientistVector[i].getDday())
           {
               co =  co + 1;
               if(co == 1)
               {
                       cout << endl << "Scientists which matched your search: "<< endl;
               }

               cout << "Name: " << scientistVector[i].getName() << endl;
               cout << "Sex: "<< scientistVector[i].getSex() << endl;
               cout << "Birthday: "<< scientistVector[i].getBday() << endl;
               cout << "Date of death: "<< scientistVector[i].getDday()<< endl;
               cout << endl;
           }

           finding[0]=toupper(finding[0]);

        }

    if(co == 0 )
    {
        cout << endl << "Scientist not found!" << endl << endl;
    }
}

void ScientistRepository::stringToLower(string& finding){
    int lengd = finding.length();
    for(int i = 0; i < lengd ; i ++)
    {
        finding[i] = tolower(finding[i]);

    }
}

void ScientistRepository::firstToUpper(string& finding){
    int counter = -1;
    int length = finding.length();

    finding[0] = toupper(finding[0]);

    for(int i = 0; i < length; i++)
    {
        if(isspace(finding[i]))
        {
          counter = counter -1;
        }
        if(counter < -1)
        {
            finding[i+1] = toupper(finding[i+1]);
            counter = -1;
        }

    }

}

void ScientistRepository::write(){

    //cout << "Enter the name of the file you want to write in: ";
    string file;
    //cin >> file;
    file = "file.txt";

    ofstream outs (file.c_str(), ofstream::trunc);



    if(!outs.is_open()){

        cout << "The file didn't open! " << endl;
    }
    else{

        int a=scientistVector.size();

        for(int i=0; i<a; i++){
            outs<< scientistVector[i];
        }

        outs.close();
    }
}

void ScientistRepository::READ(){

    int a= scientistVector.size();
    cout << "Scientists:" << endl<<endl;

    for(int i=0; i<a; i++){


        cout << "Name: " << scientistVector[i].getName() << endl;
        cout << "Sex: "<< scientistVector[i].getSex() << endl;
        cout << "Birthday: "<< scientistVector[i].getBday() << endl;
        cout << "Date of death: "<< scientistVector[i].getDday()<< endl;
        cout << endl;

    }
}


bool bdayComparator(Scientist a, Scientist b) {
    return a.getBday() < b.getBday();
}

bool ddayComparator(Scientist a, Scientist b) {
    return a.getDday() < b.getDday();
}

bool nameComparator(Scientist a, Scientist b) {
    return a.getName() < b.getName();
}

bool sexComparator(Scientist a, Scientist b) {
    return a.getSex() < b.getSex();
}


void ScientistRepository::sortDday() {
    sort(scientistVector.begin(), scientistVector.end(), ddayComparator);
}

void ScientistRepository::sortName() {
    sort(scientistVector.begin(), scientistVector.end(), nameComparator);
}

void ScientistRepository::sortBday(){
    sort(scientistVector.begin(), scientistVector.end(), bdayComparator);
}

void ScientistRepository::sortSex(){
    sort(scientistVector.begin(), scientistVector.end(), sexComparator);
}

void ScientistRepository::Sort(){

    string a;

    cout<< endl << "How would you like to sort? by 'name', 'sex', 'birthday' or 'date of death'? "<< endl;
    cout << "Choose now: ";
    cin.ignore();
    getline(cin,a);
    int b;

    if(a=="name")
        b=1;
    if(a=="sex")
        b=2;
    if(a=="birthday")
        b=3;
    if(a=="date of death")
        b=4;

   switch(b){


       case 1:
           sortName();
           break;
      case 2:
           sortSex();
           break;
       case 3:
           sortBday();
           break;
       case 4:
           sortDday();
           break;
       default:
            cout << "This is not a valid option!" << endl;
            break;

   }
   READ();
   write();
}
