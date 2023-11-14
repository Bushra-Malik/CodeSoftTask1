#include <iostream>
using namespace std;

int main() {

    int randomNumber = (rand() % 50)+1;// genarates random number btw 1 and 49
    int guess = 0; // variable to store guess value from user
    int counter = 0; // store attempts count


    do {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;
        counter++;

        if (guess > randomNumber) {
            cout << "Too high! Try again." << std::endl;
        }
        else if (guess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        }
        else {
            std::cout << "Congratulations! Finally you guessed the number in " << counter << " attempts." << std::endl;
        }
    } while (guess != randomNumber);

    return 0;
}
