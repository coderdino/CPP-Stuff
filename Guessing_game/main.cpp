#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses)
    {
        if(guessCount < guessLimit)
        {
            cout << "Enter your guess: ";
            cin >> guess;
            guessCount++;

        } else
        {
            outOfGuesses = true;
        }

        if(secretNum < guess)
        {
            cout << "Lower!" << endl;

        }else if(secretNum < guess && guessCount == guessLimit)
        {
          cout << "" << endl;

        }else if(secretNum > guess && guessCount == guessLimit)
        {
          cout << "" << endl;

        }else
        {
            cout << "Higher!" << endl;

        }
    }

    if(outOfGuesses)
    {
        cout << "You lose! Hahahaha \n";
    } else
    {
        cout << "You guessed it right! \n";
    }

    return 0;
}
