#include <iostream>
#include <string>
using namespace std;

struct Alumnos {
    string nombre[3];
    int notas[9];
};

int main(){
    Alumnos estudiante;
    estudiante.nombre[0]= "Juan";
    estudiante.nombre[1]= "Pedro";
    estudiante.nombre[2]= "Miguel";

    estudiante.notas[0]= 12;
    estudiante.notas[1]= 45;
    estudiante.notas[2]= 30;
    estudiante.notas[3]= 50;
    estudiante.notas[4]= 47;
    estudiante.notas[5]= 40;
    estudiante.notas[6]= 30;
    estudiante.notas[7]= 30;
    estudiante.notas[8]= 42;

    Alumnos* ptr= &estudiante;

    int nota= 3;
    int j= 0;
    for(int i=0; i<3; i++){
        cout << "Estudiante No. " << i+1 << ":" << endl;
        cout << "Nombre: " << ptr->nombre[i]<< endl;
        cout << "Notas del estudiante: ";
        for(j; j<nota; j++){
            cout << ptr->notas[j] <<"\t";
        }
        cout<<"\n"<<endl;
        nota+=3;
    }

    return 0;
}