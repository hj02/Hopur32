#include "scientistrepository.h"
#include <fstream>
#include <string>


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
    int i=0; // nota þessa breytu til að vita hvada medlimabreytu textinn sem vid lesum inn tilheyrir(skoda fyrir nedan)

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
        while(getline(in,line,';')){ // les inn strenginn line sem endar við semíkommu

         if(i==0){
            s.setName(line);

         }
         if(i==1){
            s.setSex(line);
         }
         if(i==2){
            s.setBday(line);
         }
         if(i==3){
            s.setDday(line);
            scientistVector.push_back(s); // allar medlimabreytur s hafa verid lesnar inn svo við baetum s inni vektorinn okkar og byrjum uppa nytt
            i=-1; // upphafstilla i uppa nytt
         }

         i++;
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

    for(int i=0; i<scientistVector.size(); i++){
        cout<< scientistVector[i];
    }

}
