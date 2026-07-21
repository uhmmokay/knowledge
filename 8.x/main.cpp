#include "Random.h"
#include <iostream>
#include <limits>
#include <string>

#define DEBUG

namespace Game
{
    static int x {}, y {};
    int answer {};

    void genAnswer(int x, int y)
    {
        answer = {Random::get(x, y)};
    }

    
}

void introdution();
bool tryagain();
void finish(bool correct);
bool hilo();
void config();
void fix_min_max(int x, int y);
int getValue(std::string x);

void fix_min_max(int x, int y)
{
    int z {y};
    Game::y = x;
    Game::x = z;
}

void introdution()
{
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
}

bool tryagain()
{
    char x {};
    std::cout << "Would you like to play again (y/n)? ";
    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch (x)
    {
        case 'y':
            return true;
        case 'n':
            std::cout << "Thank you for playing.\n";
            return false;
        default:
           return tryagain();
    }
    return false;
}

void finish(bool correct)
{
    if (correct)
    {
        std::cout << "Correct! You win!\n";
    } else {
        std::cout << "Sorry, you lose. The correct number was " << Game::answer << "\n";
    }
}

bool hilo()
{
    bool guess{false};

    #ifdef DEBUG
    std::cout << "DEBUG: GUESS IS " << Game::answer << "\n";
    #endif

    for (int i {1}, x {}; i <= 7 ; i++)
    {
        if (guess) {break;}
        std::cout << "Guess #" << i << ": ";
        std::cin >> x;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Invalid input. Enter a number.\n";
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (x == Game::answer){
            guess = true;
            continue; 
        } else if ( x != Game::answer) {
            std::string h_l {(x > Game::answer) ? "high.\n" : "low.\n"};
            std::cout << "Your guess is too " << h_l;           
        }
    }
    return guess;
}

int getValue(std::string x)
{

    while (true)
    {
        std::cout << "Enter " << x << "value: ";
        int y {};
        std::cin >> y;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Invalid input. Enter a number.\n";
            continue;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return y;
    }
}

void config()
{
    std::cout << "Would you like to edit min and max values (y/n)? ";
    char c {};
    std::cin >> c;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    static bool defined {false};
    switch (c)
    {
        case 'y':
            Game::x = {getValue("min")}; Game::y = {getValue("max")};
            if (Game::x > Game::y)
                fix_min_max(Game::x, Game::y);

            defined = true;
            Game::genAnswer(Game::x, Game::y);
            break;
        case 'n':
            if (defined)
            {
                Game::genAnswer(Game::x, Game::y);
            } else {
                Game::genAnswer(1, 100); 
            }
            break;
        default:
            config();
    } 
}

signed main()
{
    introdution();
    while (true)
    {
        config();
        finish(hilo());
        if (tryagain()) { continue; } else { break; }
    }
}