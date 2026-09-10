
#include <iostream>

using namespace std;

int main()
{
    char cadena[100],texto[100],numeros[100];
    int i = 0,cont_t = 0, cont_n = 0;
    cout << "ingrese una cadena de texto para separar los numeros y las letras" << endl;
    cin>>cadena;

    while (cadena[i]!= '\0') {   //bucle hasta que termine la cadena
        if(cadena[i] >= 'a' && cadena[i] <= 'z' ||cadena[i] >= 'A' && cadena[i] <= 'Z'){  //condicion para solo agregar a la cadena de texto
            texto[cont_t]=cadena[i];
            cont_t++; //suma para pasar a la siguiente posicion del arreglo del texto
            texto[cont_t] ='\0' ;
        }
        else if(cadena[i]>= '0' && cadena[i]<='9'){ //condicion para agregar los numeros
            numeros[cont_n]=cadena[i];
            cont_n++;  //suma para pasar a la siguiente posicion del arreglo del texto
            numeros[cont_n] ='\0' ;
        }
        i++;
    }
    cout<<"texto:  "<<texto<<endl;
    cout<<"numeros:   "<<numeros;
    return 0;
}
