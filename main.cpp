#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int num1;

    cout << "ingrese un numero" << endl;
    cin >> num1;
    cout << num1;
    return a.exec();
}
