#include <iostream>

using namespace std;

int main()
{
    char cadena [100]; //limite modificable
    int i = 0;
    cout << "Ingrese una cadena de texto para convertir las minusculas a mayusculas" << endl;
    cin>>cadena;
    while (cadena[i]!='\0'){ // '0' representa el final de la cadena por eso se ejecuta hasta que se llegue ahi
        if(cadena[i] >= 'a'&& cadena[i] <='z'){ //se compara si
            cadena [i]-=32;

        }
        i++;
    }
    cout<<cadena;
    return 0;
}
