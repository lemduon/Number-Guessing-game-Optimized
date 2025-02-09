#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main() {
    srand(time(NULL));
    int number = (rand() % 20) + 1;
    int ans;
    int tries = 0;
    while (true) {
        cout << "Enter your guess: ";
        cin >> ans;
        if (ans == number) {
            cout << "Correct!" << endl;
            tries += 1;
            break;
        } else if (ans < number) {
            cout << "Too low! Try Again!" << endl;
            tries += 1;
        } else if (ans > number) {
            cout << "Too high! Try again!" << endl;
            tries += 1;
        } else {
            cout << "Invalid input!" << endl;
        }
    }
    cout << "You got it in " << tries << " try/tries.";
}
