#include <iostream>
using namespace std;

int main (int argc, char* argv[]) {
    // Your code goes here...


    int base;

    if ( argc != 2) {
        cout << "Error, invalid number of arguments." << endl;
        return 1;

    }


    base = atoi( argv[1]);

    for ( int i = 1; i <= base; i++ ) {
        for ( int j = base -i ; j >= 1; j --){
        cout << " ";
            
        } 
        for ( int j = 1; j <= i; j++) {
            if ( j == i) {
                cout << "*";
            } else {
            cout << "* ";
            }
    }
        cout << endl;
    } 

    return 0;
}
