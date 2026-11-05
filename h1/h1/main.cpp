#include <iostream>

using namespace std;
int a;
int b;

void calcSum(int a, int b){
    int summa = a + b;
    cout<<"summa on "<<summa<<endl;
}
void calcDiv(int a, int b){
    if (b == 0){
        cout<<"virhe jaettaessa"<<endl;
    }
    else {
        int osamaara = a / b;
        cout<<"osamaara on "<<osamaara<<endl;
    }
}


int retSum(int a, int b){
    int summa = a + b;
    return summa;
}

int retDiv(int a, int b){
    float result;
    if (b != 0){
        result = a / b;
        return result;
    }
    else {
        throw std::runtime_error("jakaja ei saa olla nolla!");
    }
}

int main()
{
    cout << "Anna kaksi lukua" << endl;
    cin >> a;
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);
    retSum(a, b);
    try {
        retDiv(a, b);
    }
    catch (runtime_error& e){
        cout<<"Error: "<< e.what()<< endl;
    }
}
