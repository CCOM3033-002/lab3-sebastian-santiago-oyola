#include <iostream>
#include <cstdlib> // libreria nueva requerida para numero aleatorio
using namespace std;

// Sebastian Santiago Oyola
//# de Estudiante: 801-23-9121

int main(){
    srand(time(0)); // inicializa el numero aleatorio

    int greatest, middle, smallest = 0; // variables que usaremos luego para "organizar" los numeros
    
    int num1 = rand() % (100 - 0 + 1) + 0;
    int num2 = rand() % (100 - 0 + 1) + 0;
    int num3 = rand() % (100 - 0 + 1) + 0;  // genera tres numeros aleatorios entre 0 a 100 y los asigna a tres variables separadas

    cout << "Numeros generados: " << num1 << ", " << num2 << ", " << num3 << endl;

    if (num1 > num2 && num1 > num3){ // caso if que actua si num1 es mayor que los otros dos, luego verifica cual de num2 y num3 es mayor
        greatest = num1;
        if (num1 == greatest){
            if(num2 > num3){
                middle = num2;
                smallest = num3;}
            else{
                middle = num3;
                smallest = num2;
            }
            }
        }
    
    if (num2 > num1 && num2 > num3){ // caso if que actua si num2 es mayor que los otros dos, luego verifica cual de num1 y num3 es mayor
        greatest = num2;
        if (num2 == greatest){
            if(num1 > num3){
                middle = num1;
                smallest = num3;}
            else{
                middle = num3;
                smallest = num1;
            }
            }
        }

    if (num3 > num1 && num3 > num2){ // caso if que actua si num3 es mayor que los otros dos, luego verifica cual de num1 y num2 es mayor
        greatest = num3;
        if (num3 == greatest){
            if(num1 > num2){
                middle = num1;
                smallest = num2;}
            else{
                middle = num2;
                smallest = num1;
            }
            }
        }
    cout << "Orden descendiente: " << greatest << " >= " << middle << " >= " << smallest << endl;

}


