#include <iostream>
#include <string>
#include <time.h>
#include <random>

short pVic[3][3] = {
    {-1, 0, 1},
    {1, -1, 0},
    {0, 1, -1}};
int main()
{
    srand(time(NULL));

    char pChoice = '2';
    int aiChoice = 2;
    while (true)
    {
        std::cout << "Type 0 (rock), 1 (paper), or 2 (scissors) to choose! Alternatively, type 'q' to quit.\n";
        aiChoice = rand() % 2;
        std::cin >> pChoice;
        if (pChoice == 'q')
        {
            break;
        }

        int choice = pChoice - '0';
        switch (aiChoice)
        {
        case 0:
            std::cout << "The bot chose Rock!\n";
            break;
        case 1:
            std::cout << "The bot chose Paper!\n";
            break;
        case 2:
            std::cout << "The bot chose Scissors!\n";
            break;
        default:
            std::cout << "Invalid choice!\n";
            return -1;
            break;
        }

        short victory = pVic[choice][aiChoice];
        switch (victory)
        {
        case -1:
            std::cout << "There was a tie!\n\n";
            break;
        case 0:
            std::cout << "You lost!\n\n";
            break;
        case 1:
            std::cout << "You won!\n\n";
            break;
        default:
            break;
        }
    }
}