#define _GLIBCXX_USE_CXX11_ABI 1
#include "../include/assignment1.hpp"
#include <iostream>
#include <vector>
#include <ostream>

namespace Homework
{
    using namespace std::literals;

    // Loo nimetu argumentideta lambda funktsioon
    auto el = []() { std::cout << "This is a lambda function without arguments." << std::endl; };

    // Loo ilr1 nimeline lambda funktsioon,
    // mis võtab argumendiks 2 inti (i, j) ja tagastab nende summa
    auto ilr1 = [](int i, int j) -> int { return i + j; };

    // Loo ilr2 nimeline lambda funktsioon,
    // mis võtab argumendiks int viida (i) ja suurendab seda 1 võrra
    auto ilr2 = [](int& i) { ++i; };

    // Funktsioon, mis tagastab tulemused
    Tasks assignment1()
    {
        Tasks results;
        results.reserve(5ull);

        results.push_back({"el is a lambda", (std::is_class_v<decltype(el)>) && (std::is_invocable_v<decltype(el)>) });
        results.push_back({"ilr1 is lambda", (std::is_class_v<decltype(ilr1)>) && (std::is_invocable_v<decltype(ilr1), int, int>) });
        results.push_back({"ilr1 returns sum of its args", (ilr1(1, 2) == 3)});
        results.push_back({"ilr2 is lambda", (std::is_class_v<decltype(ilr2)>) && (std::is_invocable_v<decltype(ilr2), int&>) });

        int il{ 5 };
        ilr2(il);
        results.push_back({"ilr2 increases given number", (il == 6)});

        return results;
    }
}