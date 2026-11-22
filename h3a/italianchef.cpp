#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string a) : Chef(a) {
    name = a;
    cout<<"Italian Chef "<<name<<" konstruktori"<<endl;
}
ItalianChef::~ItalianChef(){
    cout<<"Italian Chef "<<name<<" destruktori"<<endl;
}

string ItalianChef:: getName(){
    return name;
}

void ItalianChef::makePasta(){
    cout<<"Italian Chef "<<name<<" makes pasta"<<endl;
}
