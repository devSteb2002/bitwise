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

void exercise3(){
    //Escriba un programa para poner a 1 el n-ésimo bit de un entero;
    int num;
    unsigned n;
    unsigned int operatorOr = 0;

    int bits = (sizeof(num) * 8) - 1;

    cout << "Introduzca el numero: " << endl;
    cin >> num;

    cout << "introduzca el numero n: " << endl;
    cin >> n;

    int positionToLeft = (bits - n);
    int moveToLeft = (1 << ((positionToLeft) + 1));
    operatorOr |= moveToLeft;

    cout << "El numero original es "<<  bitset<32> (num) << endl;
    cout << "Coregido el bit en la posicion: " << n << " seria " << bitset<32> (operatorOr);
}

void exercise4(){
    //escriba un programa que cuente todos los bits de valor 1 de un entero;
    // arquitectura 32
    int num;
    int count = 0;

    cout << "Introduzca un numero: ";
    cin >> num;

    while (num){
        count += num & 1;
        num >>= 1;
    }

    cout << "El numero total de bits en 1 es: " << count << endl;
}

void exercise5(){
    //escriba un programa que complemente el n-esimo bit de un entero
    unsigned int n;
    int num;

    cout << "Ingrese un valor de n: " << endl;
    cin >> n;

    cout << "Ingrese un numero entero: " << endl;
    cin >> num;

    int mask = 1 << n;
    num ^= mask;

    cout << "el complementeo del bit: " << n << " es: " << num;
}

void exercise6(){
    //escriba un programa que permite determinar el bit mas a la derecha con valor 1
    int num;
    int count = 32;

    cout << "Ingrese un numero entero: " << endl;
    cin >> num;

    while (num){
        unsigned int bit = (num & 1);

        if (bit == 0){
            num >>= 1;
            count--;
            continue;
        }

        break;
    }

    cout << "El bit mas a la derecha con valor uno esta en la posicion: " << count << endl;

}

void exercise7(){
    //escriba un programa que complemente todos los bit de un entero

    int num;

    cout << "Ingrese un numero entero: " << endl;
    cin >> num;

    int complement = ~num;

    cout << "El numero original es: " << bitset<32> (num) << endl;
    cout << "El complementeo es: " << bitset<32> (complement) << endl;
}

void exercise8(){
    //escriba un programa para determinar si un numero es par o impar

    int num;

    cout << "Digite un numero entero: " << endl;
    cin >> num;

    int operation = num & 1;
    if (operation == 1)  cout << "El numero " << num  << " es impar";
    else cout << "El numero " << num  << " es par";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //exercise1();
    //exercise2();
    //exercise3();
    //exercise4();
    //exercise5();
    //exercise6();
    //exercise7();
    exercise8();

    return a.exec();
}


