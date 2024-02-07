#include <iostream>
using namespace std;

void metodoBurbuja(int arreglo[], int elementos){
    for (int i = 0; i < elementos - 1; i++) {
        for (int j = 0; j < elementos - i - 1; j++) {

            if (arreglo[j] > arreglo[j + 1]) {
                int aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
        }
    }

    /*COMPLEJIDAD DEL METODO BURBUJA
    ESTA TIENE UNA COMPLEJIDAD DE O(n^2) DEBIDO A QUE TENEMOS DOS BUCLES ANIDADOS
    ESTO SIGNIFICA QUE SI TENEMOS 10 ELEMENTOS SE PODRIA ACCEDER HASTA 100 VECES EN
    MEMORIA PARA PODER ORDENARLOS*/
}

int main() {
    //EJEMPLO
    int arreglo [] = {10,20,30,40,5,8,9,21,31,99,100};
    int elementos = sizeof(arreglo) / sizeof(arreglo[0]);

    cout<<"Sin ordenar"<<endl;
    for (int i = 0; i < elementos; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout<<"Ordenado con el Metodo Burbuja"<<endl;
    metodoBurbuja(arreglo,elementos);
    for (int i = 0; i < elementos; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    return 0;
}
