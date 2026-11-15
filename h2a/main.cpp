#include <iostream>
#include "Car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>
#include "rectangle.h"
using namespace std;

int main()
{
    //Auto
    cout<<endl<<"Auto"<<endl;

    Car hei;
    hei.setBrand("Toyota");
    hei.setModel("Yaris");
    hei.setYearModel(1999);
    hei.printData();

    //Rectangle
    cout<<endl<<"Suorakulmio"<<endl;

    Rectangle* moi = new Rectangle();
    moi->setWidth(12.5);
    moi->setHeight(80);
    cout<<"Pinta-ala: "<<moi->getArea()<<endl;
    cout<<"Piiri: "<<moi->getCircum()<<endl;
    delete moi;
    moi = nullptr;

    //Student
    cout<<endl<<"Oppilas"<<endl;

    unique_ptr<Student> oppilas = make_unique<Student>();
    oppilas->setName("Boris");
    oppilas->setStudentNumber(123);
    oppilas->setAverage(8.5);
    cout<<"Nimi: "<<oppilas->getName()<<endl;
    cout<<"Numero: "<<oppilas->getStudentNumber()<<endl;
    cout<<"Keskiarvo: "<<oppilas->getAverage()<<endl;

    return 0;
}
