#include <iostream>
#include <limits>


bool tryOpenSafe(int& balance, const int* code, const int& correct, int& safebalance)
{
    if (!code)
    {
        return false;
    }

    if (correct == *code)
    {
        balance -= 500;
        safebalance += 500;
        return true;
    }
    
    return false;
}

int main()
{
    const int correctcode {666};
    int balance {999};
    int safebalance {0};
    while (true)
    {
        if ( balance < 500)
        {
            std::cout << "\nYou've no longer able to put something into ur safe. You need to take money from it. Press Enter to take 500$ from safe: ";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            balance += 500;
            safebalance -= 500;
        }
        int x {};
        std::cout << "You have: " << balance << "$ , enter code for safe to put some money in: ";
        std::cin >> x;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        bool result {tryOpenSafe(balance, &x, correctcode, safebalance)};
        std::cout << (result ? "Success! You've putted 500$ in ur safe." : "Something's wrong...") << ", Now you have: " << balance << '\n';


    }
}