#include "car.h"
#include <iostream>
using namespace std;


Car::Car(string b, string m, int y){
    brand = b;
    model = m;
    yearModel = y;
}


void Car::printData() {
    cout<<brand<<endl<<model<<endl<<yearModel<<endl;
}
