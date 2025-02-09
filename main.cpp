#include <iostream>
#include <ctime>
#include <limits>

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

        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }

        tries += 1;

        if (ans == number) {
            cout << "Correct!" << endl;
            break;
        } else if (ans < number) {
            cout << "Too low! Try Again!" << endl;
        } else {
            cout << "Too high! Try again!" << endl;
        }
    }

    cout << "You got it in " << tries << " try/tries." << endl;
}
