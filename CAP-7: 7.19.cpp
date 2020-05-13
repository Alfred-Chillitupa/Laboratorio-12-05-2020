#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

const size_t tamarray1{7}, tamarray2{10};

  // output vector contents
    void outputVector(const array<int, tamarray1>& items) {
        for (int item : items) {
        cout << item << " ";
        }
    cout << endl;
    }

    // input vector contents
    void inputVector(array<int, tamarray1>&  items) {
        for (int& item : items) {
        cin >> item;
        }
    } 

    void outputVector2(const array<int, tamarray2>& items) {
        for (int item : items) {
        cout << item << " ";
        }
    cout << endl;
    }

    // input vector contents
    void inputVector2(array<int, tamarray2>&  items) {
        for (int& item : items) {
        cin >> item;
        }
    } 
int main(){
    

    array<int, tamarray1> integers1{};
    array<int, tamarray2> integers2{};
    
    //vector<int> integers1(7);  // 7-element vector<int>
    //vector<int> integers2(10); // 10-element vector<int>

    // print integers1 size and contents
    cout << "Size of vector integers1 is " << integers1.size()
        << "\nvector after initialization:";
    outputVector(integers1);

    // print integers2 size and contents
    cout << "\nSize of vector integers2 is " << integers2.size()
        << "\nvector after initialization:";
    outputVector2(integers2);

    // input and print integers1 and integers2
    cout << "\nEnter 17 integers:" << endl;
    inputVector(integers1);
    inputVector2(integers2);

    cout << "\nAfter input, the vectors contain:\n"
        << "integers1:";
    outputVector(integers1);
    cout << "integers2:";
    outputVector2(integers2);

     // use inequality (!=) operator with vector objects
    cout << "\nEvaluating: integers1 != integers2" << endl;

    if (tamarray1 != tamarray2) {
        cout << "integers1 and integers2 are not equal" << endl;
    }

    // create vector integers3 using integers1 as an
    // initializer; print size and contents 
    //vector<int> integers3{integers1}; // copy constructor
    array<int, tamarray1> integers3{integers1};
    
    cout << "\nSize of vector integers3 is " << integers3.size()
        << "\nvector after initialization: ";
    outputVector(integers3);
    
    // use overloaded assignment (=) operator
    cout << "\nAssigning integers2 to integers1:" << endl;
    array<int, tamarray2> integers11{integers2}; // assign integers2 to integers11
    
    // I realized that is not possible re declare an array with different size
    cout << "integers1: ";
    outputVector2(integers11);
    cout << "integers2: ";
    outputVector2(integers2);
    
    // use equality (==) operator with vector objects
    cout << "\nEvaluating: integers1 == integers2" << endl;

    if (integers11.size() == integers2.size()) {
        cout << "integers1 and integers2 are equal" << endl;
    }
    
    // use square brackets to use the value at location 5 as an rvalue
    cout << "\nintegers1[5] is " << integers11[5];

    // use square brackets to create lvalue
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers11[5] = 1000;
    cout << "integers1: ";
    outputVector2(integers11);

    // attempt to use out-of-range subscript 
    try {
        cout << "\nAttempt to display integers1.at(15)" << endl;
        cout << integers11.at(15) << endl; // ERROR: out of range
    }
    catch (out_of_range& ex) {
        cerr << "An exception occurred: " << ex.what() << endl;
    } 
    
    // changing the size of a vector
     // is imposible change array's size it only change the last value with 1000
    cout << "\nCurrent integers3 size is: " << integers3.size() << endl;
    integers3[integers3.size()-1]=1000; // add 1000 to the end of the vector
    cout << "New integers3 size is: " << integers3.size() << endl;
    cout << "integers3 now contains: ";
    outputVector(integers3);

    return 0;
}