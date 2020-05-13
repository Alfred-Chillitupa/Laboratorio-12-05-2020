#include <iostream>
#include <array>
using namespace std;
const size_t tamarray1{10};
int mayor{0};
int maxArray(array<int, tamarray1> &items, int ini, int fin){
    items[ini] > mayor ? mayor = items[ini]:mayor;
    return ini == fin ? mayor: maxArray(items, ini + 1, fin);
}

int main(){
    array<int, tamarray1> alfred{1, 2, 3, 4, 15, 6, 7, 8, 9, 10};
    cout<<maxArray(alfred, 3, 7);
    return 0;
}