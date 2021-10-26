#include <iostream>
#include <cstdlib>
#include <ctime>

void play_game()
{
    int random = rand() % 251;
    std::cout << "Guess A Random Number Between 0 and 250: ";
    while(true)
    {
        int guess;
        std::cin >> guess;
        if(guess == random)
        {
            std::cout << "You Win!\n";
            break;
        } else if (guess < random)
        {
            std::cout << "Too Low!\n";
        } else
        {
            std::cout << "Too High\n";
        }
    }
}

int main()
{
    srand(time(NULL));
    int choice;
    do
    { 
        std::cout << "0. Quit\n1. Play Game\n";
        std::cin >> choice;
        switch(choice)
        {
            case 0:
                std::cout << "Thanks For Nothing\n";
                return 0;
            case 1:
                std::cout << "Yo, Let's Play a Game!\n";
                play_game();
                break;
            default:
                std::cout << "Invalid Input... Exiting...\n";
                return 0;
                //choice = 0;
        }
    }
    while(choice != 0);

    
}