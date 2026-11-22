#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef pasi("Pasi");
        pasi.makeSalad();
        pasi.makeSoup();

        cout<<endl;

        ItalianChef vito ("Vito");
        vito.makePasta();

    return 0;
}
