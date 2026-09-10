#include <iostream>

using namespace std;

void convertir(int numero, char cadena[])
{
    int i = 0;

    while(numero > 0)
    {
        int digito = numero % 10;
        cadena[i] = '0' + digito;
        numero = numero / 10;
        i++;
    }

    cadena[i] = '\0';

    int j = 0;
    i--;

    while(j < i)
    {
        char temporal = cadena[j];
        cadena[j] = cadena[i];
        cadena[i] = temporal;

        j++;
        i--;
    }
}

int main()
{
    int numero;
    char cadena[10];

    cout << "Ingrese un numero: ";
    cin >> numero;

    convertir(numero, cadena);

    cout << "El numero convertido es: " << cadena << endl;

    return 0;
}