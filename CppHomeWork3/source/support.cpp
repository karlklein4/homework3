#include "../include/support.hpp"
#include <iostream>
#include <cassert>
#include <algorithm>

void Homework::test_assignment(std::string name, Assignment assignment){
    
    auto print_list {
        [](std::pair<std::string, bool> answer) {
            std::cout << "  " << answer.first << ": " << 
                (answer.second ? "Success" : "Failure") << '\n';
            //assert(pair.second);
        }
    };
    auto test_results{ assignment() };

    std::cout << "TEST RESULTS: " << name << '\n';
    std::ranges::for_each(test_results, print_list);
    std::cout << '\n';
    
}