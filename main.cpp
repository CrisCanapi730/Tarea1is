#include<iostream>
using namespace std;

int suma(int n1, int n2)
{
    int suma;
    suma = n1 + n2;
    return suma;
}

void menu()
{
    int opcion;
    int n1, n2;

    cout << "Menu de Opciones" << endl;
    cout << "1. Sumar dos numeros: " << endl;
    cout << "2. Restar dos numeros: " << endl;
    cout << "3. Multiplicar dos numeros: " << endl;
    cout << "4. Dividir dos numeros: " << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
    {
        cout << "Ingrese el numero 1: ";
        cin >> n1;
        cout << "Ingrese el numero 2: ";
        cin >> n2;
        int sum = suma(n1, n2);
        cout << "El resultado es: " << sum << endl;
        break;
    }
    default:
        cout << "Opcion invalida!" << endl;
}

}

int main()
{
    menu();
    return 0;
}