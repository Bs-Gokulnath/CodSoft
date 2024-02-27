#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int num;

    srand(time(0));
    num = 1+(rand() % 101);

    int n;

    cout << "Enter Number between (1 - 100): ";
    cin >> n;

    while (true) {
        if (num > n) {
            cout << "Too Low!!! Try again: ";
            cin >> n;
        } else if (n > num) {
            cout << "Too High!!! Try again: ";
            cin >> n;
        } else {
            cout << "You Guessed it Right! The number is: " << n << "\n";
            break; 
        }
    }

    return 0;
}
