#include "scientistrepository.h"
#include <fstream>
#include <string>
#include <cctype>
#include <iostream>
using namespace std;


ScientistRepository::ScientistRepository()
{
    scientistVector = vector<Scientist>();
}

void ScientistRepository::add(Scientist s)
{
    scientistVector.push_back(s);
}


void ScientistRepository::read(){

    string file;  // nafnid a skránni sem vid viljum lesa inn

    cout << "Skrifaðu inn heiti á skrá sem þú vilt að lesið er úr: ";
    cin >> file;

    ifstream in(file.c_str()); // by til nyjan straum sem opnar skránna file (fallid c_str() breytur string i c-string, þ.e tekur /O af strengnum)
    string line;

    // athuga hvort skráin hefur ekki pottþett opnast
    if(!in.is_open()){

        cout << "Ekki tokst ad opna skra";
    }

    else{
        Scientist s;
        cout <<"það tókst að opna skrá!"<< endl;
        getline(in,line,';');

        while(!in.eof()){
        for(int j=0; j<5; j++){





            if(j==0){
                 s.setNr(line);
            }


            if(j==1){
                s.setName(line);

            }
            if(j==2){
                s.setSex(line);
            }
            if(j==3){
                s.setBday(line);
            }
            if(j==4){
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
    cout << "Sladu inn leitarord: ";
    string finding;
    int  a = scientistVector.size();

    cin.ignore();
    getline(cin, finding);

    cout << "Vísindamenn sem possudu vid leitarord: "<< endl;


    int lengd = finding.length();

    stringToLower(lengd,finding);

    firstToUpper(finding, lengd);


    for(int i = 0; i < a; i++)
       {
           if(finding == scientistVector[i].getNr()){

               cout << scientistVector[i];
           }

           if(finding == scientistVector[i].getName())
           {
               cout << scientistVector[i];
           }
           if(finding == scientistVector[i].getSex())
           {
               cout << scientistVector[i];
           }
           if(finding == scientistVector[i].getBday())
           {
               cout << scientistVector[i];
           }
           if(finding == scientistVector[i].getDday())
           {
               cout << scientistVector[i];
           }
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

