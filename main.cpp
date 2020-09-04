#include <iostream>

using namespace std;
int main() {
    double n; //number we need to guess its square root

    double r, guess, prev_guess;
    cout << "Type in a number" << endl;
    cin >> n;

    // initial guess
    guess = n/2.0;

    for ( int i = 0; i<100; i++) {
        r = n / guess;
        prev_guess = guess;
        guess = (guess + r) / 2.0;
    }
        cout << " The square root of " << n << " is " << guess << endl;

    return 0 ;
}
