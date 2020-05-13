#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 999> booleana{};
    for (size_t i{1}; i <= booleana.size(); ++i) {
        booleana[i] = 1;
    }
    booleana[1] = 0;
    for (size_t i{2}; i < booleana.size(); ++i){

        if (booleana[i]==1){
            for (size_t j{i}; j <= booleana.size(); ++j) {
                if (j%i==0 && j!=i){
                    booleana[j] = 0;
                }
            }
        }

    }
    cout << "Array Booleano de la Criba\n" << endl;
    for (size_t j{1}; j <= booleana.size(); ++j){
        cout << booleana[j] << " ";
        if (j % 10 == 0)
            cout << endl;
    }
    cout << endl;
    cout << "\nArray visualizando los numeros primos dentro del rango 2 a 999\n";
    cout << endl;
    unsigned int counter{0};
    for (size_t j{1}; j <= booleana.size(); ++j){
        if (booleana[j]==1){
            cout << j << " ";
            ++counter;
            if(counter%13==0){
                cout << endl;
            }
        }  
    }
    cout << endl;
    return 0;
}