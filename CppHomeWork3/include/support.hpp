#pragma once
#include <functional>
#include <unordered_map>
#include <string>
namespace Homework
{
    using Assignment = std::function<std::vector<std::pair<std::string, bool>>()>;
    void test_assignment(std::string name, Assignment);
}

