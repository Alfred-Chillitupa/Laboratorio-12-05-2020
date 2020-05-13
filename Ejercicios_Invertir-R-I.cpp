#include <iostream>
#include <algorithm> 

using namespace std;

void invertirIterativamente(int arreglo[],int tam){
    int temp[tam];
    for (int i = 0; i < tam; i++)
    {
        temp[i] = arreglo[tam - (i + 1)];
        cout << temp[i];
    }
    cout << endl;
}

void invertirRecursivamente(int arreglo[],int tam,int i=0){
    
    if (i>=tam)
        return;
    
    int temp = arreglo[i];
    arreglo[i] = arreglo[tam - 1];
    arreglo[tam - 1] = temp;
    invertirRecursivamente(arreglo, tam - 1, i + 1);
}
int main(){

    int arreglo[4]={1,2,3,4};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);
    invertirIterativamente(arreglo, tam);

    int arreglo2[5]={1,2,3,4,5};
    int tam2 = sizeof(arreglo2) / sizeof(arreglo2[0]);
    invertirRecursivamente(arreglo2, tam2);
    for (int i = 0; i < tam2;i++){
        cout << arreglo2[i];
    }
    cout << endl;
    return 0;
}