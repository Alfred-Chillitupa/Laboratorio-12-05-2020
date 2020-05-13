#include <iostream>
#include <array>
using namespace std;
const size_t tamarray1{10};

void printArray(array<int, tamarray1>& items, int ini, int fin){
    cout << items[ini] << " ";
    if(ini==fin)
        return;   
    printArray(items, ini + 1, fin);
}

int main(){
    array<int, tamarray1> alfred{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(alfred, 3, 7);
    return 0;
}