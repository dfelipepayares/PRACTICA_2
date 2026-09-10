#include <iostream>

using namespace std;

int main()
{
    int opcion, columna = 0,cont;
    char sala[15][20], fila, pos;

    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 20; j++){
            sala[i][j] = '-';
        }
    }
    while(true){

        cont = 0;
        pos = 'A';
        fila ='\0';
        cout << "Seleccione una opcion"<< endl;
        cout << "1. Reservar un asiento \n2. Eliminar reserva\n3. ver sala\n4. salir " << endl;
        cin>>opcion;
        if(opcion == 1){
            cout<<"ingrese la fila (A-O)"<<endl;
            cin>>fila;

            cout<<"ingrese la columna (1-20)"<<endl;
            cin>>columna;

            columna -=1;

            while(pos!=fila){    //bucle que busca en la fila (parte de las letras)
                pos++;
                cont++;
            }
            sala[cont][columna]='+'; //reserva el asiento que señalo el usuario
        }
        else if (opcion == 2){
            cout<<"ingrese la fila (A-O)"<<endl;
            cin>>fila;

            cout<<"ingrese la columna (1-20)"<<endl;
            cin>>columna;

            columna -=1;

            while(pos!=fila){
                pos++;
                cont++;
            }
            sala[cont][columna]='-';
        }
        else if(opcion == 3){
            cout << "   ";

            for(int j = 1; j <= 20; j++){  //bucle para mostrar las coordenadas
                cout << j << " ";
            }
            cout << endl;

            for(int i = 0; i < 15; i++){

                cout << char('A' + i) << "  ";      //bucle que imprime las coordenadas de las

                for(int j = 0; j < 20; j++){        //bucle que imprime la sala
                    cout << sala[i][j] << " ";
                }

                cout << endl;
            }
        }
        else{
            break;
        }
    }
    return 0;
}
