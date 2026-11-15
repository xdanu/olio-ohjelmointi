#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    void printData();
    Car(string b, string m, int y);

};

#endif // CAR_H
