#include <iostream>
#include "car.h"
#include <vector>
using namespace std;

int main()
{
    vector<Car>autoLista;
    autoLista.emplace_back(Car("BMW", "335i", 2008));
    autoLista.emplace_back(Car("Nissan", "Micra", 2000));
    autoLista.emplace_back(Car("Lexus", "IS200", 1998));

    cout << "Listan toisen alkion tiedot: "<<endl;
    autoLista[1].printData();

    cout<<"Kaikkien autojen tiedot: "<<endl;
    for (Car car: autoLista){
        car.printData();
    }
}
