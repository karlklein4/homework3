#include <iostream>
#include <cassert>
#include <functional>
#include <string>
#include "../include/main.hpp"
#include "../include/support.hpp"
#include "../include/assignment1.hpp"
#include "../include/assignment2.hpp"
#include "../include/assignment3.hpp"

int main(){
    Homework::test_assignment("Assignment1", Homework::assignment1);
    Homework::test_assignment("Assignment2", Homework::assignment2);
    Homework::test_assignment("Assignment3", Homework::assignment3);
}
