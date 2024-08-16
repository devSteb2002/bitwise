#include <QCoreApplication>
#include <bitset>
#include "exercise_1.cpp"

using namespace std;

void exercise1()
{
    //escriba un programa para obtener el LSB y el MSB de un entero
    int num;
    cout << "Digite un numero entero: " << endl;
    cin >> num;

    int bytes = sizeof(num); // bytes que tiene el numero arquitectura (32) 00000000 00000000 00000000 00000000
    int bits = bytes * 8; // pj: 00000000 00000000 00000000 00000000
    int bitsToRigth = (num >> (bits - 1)); //desplazar con >> los bits de num hasta la posicion bits - 1 que seria hasta la derecha del todo
    int getMsb = bitsToRigth & 1; // el 1 es ..00001 al compararlo el ultimo bit que es el unico diferente de cero al dezplazar todo queda cero menos el ultimo

    cout << "El MSG del numero: " << num << " es " << getMsb << endl;

    int getLsb = num & 1;
    cout << "El LSB del numero: " << num << " es " << getLsb;

}

void exercise2(){
    //Escriba un programa para obtener el n-ésimo bit de un entero;
    unsigned int n; // 0 a 31
    int integer;

    cout << "Digite el n-esimo bit que desea encontrar;" << endl;
    cin >> n;

    cout << "Ditige el entero: " << endl;
    cin >> integer;

    unsigned int bitsToRigth = (integer >> n) & 1;

    cout << "el n-esimo bit del entero: " << integer << " es: " << bitsToRigth << endl;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //exercise1();
    exercise2();
    return a.exec();
}


