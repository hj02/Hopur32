#include "scientistrepository.h"
#include <fstream>
#include <string>
#include <cctype>
#include <iostream>
#include <algorithm>
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
          int lengd = n.length();
          firstToUpper(n, lengd);
          s.setName(n);

          cout << "Sex: ";
          getline(cin, sex);
          s.setSex(sex);

          cout << "Born year: ";
          getline(cin, b);
          s.setBday(b);

          cout << "Died year: ";
          getline(cin, d);
          s.setDday(d);

          scientistVector.push_back(s);

          write();
}


void ScientistRepository::read(){

    string file;  // nafnid a skránni sem vid viljum lesa inn

    //cout << "Enter the name of the file you want to write in: ";
    //cin >> file;

    file = "file.txt";

    ifstream in(file.c_str()); // by til nyjan straum sem opnar skránna file (fallid c_str() breytur string i c-string, þ.e tekur /O af strengnum)
    string line;

    // athuga hvort skráin hefur ekki pottþett opnast
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

vector<Scientist> ScientistRepository::getVector(){

   return scientistVector;

}

void ScientistRepository::setVector(vector<Scientist> v){

    scientistVector=v;
}

void ScientistRepository::print(){

    int a=scientistVector.size();

    for(int i=0; i<a; i++){
        cout<< scientistVector[i];
    }

}

void ScientistRepository::find()
{
    int co = 0;
    cout << "Enter your search option: ";
    string finding;
    int  a = scientistVector.size();

    cin.ignore();
    getline(cin, finding);


    int lengd = finding.length();

    stringToLower(lengd,finding);

    firstToUpper(finding, lengd);


    for(int i = 0; i < a; i++)
       {

           if(finding == scientistVector[i].getName())
           {
               co =  co + 1;
               if(co == 1)
               {
                       cout << "Scientits which matched your search: "<< endl<<endl;
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
                       cout << "Scientits which matched your search: "<< endl<<endl;
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
                       cout << "Scientits which matched your search: "<< endl<<endl;
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
                       cout << "Scientits which matched your search: "<< endl<<endl;
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
        cout << "Scientist not found!" << endl << endl;
    }
}

void ScientistRepository::stringToLower(int lengd, string& finding){

    for(int i = 0; i < lengd ; i ++)
    {
        finding[i] = tolower(finding[i]);

    }
}

void ScientistRepository::firstToUpper(string& finding, int lengd){
    int teljari = -1;

    finding[0] = toupper(finding[0]);

    for(int i = 0; i < lengd; i++)
    {
        if(isspace(finding[i]))
        {
          teljari = teljari -1;
        }
        if(teljari < -1)
        {
            finding[i+1] = toupper(finding[i+1]);
            teljari = -1;
        }

    }

}

void ScientistRepository::write(){

//cout << "Enter the name of the file you want to write in: ";
string file;
//cin >> file;
file = "file.txt";

ofstream outs (file.c_str(), ofstream::trunc);


// athuga hvort skráin hefur ekki pottþett opnast
if(!outs.is_open()){

    cout << "The file didn't open! " << endl;
}
else{

    int a=scientistVector.size();

    for(int i=0; i<a; i++){
        outs<< scientistVector[i];
    }

    outs.close();}
    read();
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
/*

void ScientistRepository::sortName(){


    struct {
           bool operator()(Scientist a, Scientist b)
           {
               return a.getName() < b.getName();
           }
       } comparename;
       std::sort(scientistVector.begin(), scientistVector.end(), comparename);

}

void ScientistRepository::sortSex(){

    struct {
    bool operator()(Scientist a, Scientist b)
        {
          return a.getSex() < b.getSex();
        }
     } comparesex;

    std::sort(scientistVector.begin(), scientistVector.end(), comparesex);

}

void ScientistRepository::sortBday(){

    struct{

    bool operator()(Scientist a, Scientist b)
    {
      return a.getBday() < b.getBday();
     }
     } comparebday;

    std::sort(scientistVector.begin(), scientistVector.end(), comparebday);

}

void ScientistRepository::sortDday(){

    struct {
    bool operator()(Scientist a, Scientist b)
    {
      return a.getDday() < b.getDday();
  }
 } comparedday;

    std::sort(scientistVector.begin(), scientistVector.end(), comparedday);

}

void ScientistRepository::Sort(){

    string a;

    cout<<"In which row would you like to sort";
    cin >> a;
    int b;

    if(a=="name")
        b=1;
    if(a=="sex")
        b=1;
    if(a=="birthday")
        b=2;
    if(a=="date of death")
        b=3;

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
       default: break;

   }
   write();
}
*/
