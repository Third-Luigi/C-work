#include <iostream>
using namespace std;

int main (int argc, char* argv[]) {

    // Your code goes here...


    if ( argc > 3 ) {

        int possible = 0, largest = 0;
        for ( int i = 1; i < argc-2; i++ ) {
            int first, second, third;

            first = atoi(argv[i]);
            second = atoi(argv[i+1]);
            third = atoi(argv[i+2]);


            possible = ((first * 100 ) + (second * 10) + third);

            if ( possible > largest) {
                largest = possible;
            }

        }
        cout << largest;
    }

    else {
        cout << "Error, invalid number of arguments." << endl;
        return 1;
    }

    return 0;
}
