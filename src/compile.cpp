#include <iostream>
#include "functions.hpp"

auto main() -> int
{
    std::cout << "This program is linking libraries during compilation. Instructions: " << std::endl
              << "\"1\" - count prime nums" << std::endl
              << "\"2\" - calculating exponent" << std::endl
              << "\"-1\" - exit" << std::endl
              << "Input instruction: ";

    int option;
    std::cin >> option;

    while (option != -1)
    {
        switch (option)
        {
        case 1:
            int A, B;
            std::cin >> A >> B;
            std::cout << "The count is: " << PrimeCount(A, B) << std::endl
                      << "Input instruction: ";
            std::cin >> option;
            break;

        case 2:
            int num;
            std::cin >> num;
            std::cout << "The E is: " << E(num) << std::endl
                      << "Input instruction: ";
            std::cin >> option;
            break;

        default:
            option = -1;
        }
    }
    return 0;
}