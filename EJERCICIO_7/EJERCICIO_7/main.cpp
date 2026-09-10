#include <iostream>

using namespace std;

int main()
{
    char cadena[100], cadena2[100];
    int i1 = 0,pos = 1;;
    cout << "Ingrese una cadena de texto " << endl;
    cin>>cadena;
    cadena2[0] = cadena[0];

    while(cadena[i1] != '\0'){ //bucle que va a recorrer la cadena
        int i2=0;

        while(i2<pos){ //bucle que verifica que el caracter actual no este repetido en cadena2
            if(cadena[i1]==cadena2[i2]){
                break;
            }
            i2++;
        }
        if (i2 == pos){ //condicional que agrega los caracteres que no estan en la segunda cadena
            cadena2[pos]=cadena[i1];
            pos++;
            cadena2[pos]= '\0'; //importante al construir cadenas manualmente que se indique donde termina la cadena
        }
        i1++;
    }
    cout<<cadena2;
    return 0;
}
