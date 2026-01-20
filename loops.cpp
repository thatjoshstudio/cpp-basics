#include <iostream>

int main()
{
    std::cout << "Today I demonstrated a loop in C++." << std::endl;

    for (int i = 10; i >= 1; i--)
    {
        std::cout << "Preparing lift off in.. " << i << std::endl;
    }

    std::cout << "Lift off!" << std::endl;
    return 0;
}