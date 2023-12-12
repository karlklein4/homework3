#ifndef ASSIGNMENT2_HPP
#define ASSIGNMENT2_HPP

#include <functional>
#include <string>
#include <map>
#include <vector>

namespace Homework {

    /**
     * @brief Structure A.
     */
    struct A {};

    /**
     * @brief Class B, derived from A.
     */
    class B : public A {};

    /**
     * @brief Structure D, containing members A and int named a and i.
     */
    struct D {
        A a{};
        int i = 0;
    };

    /**
     * @brief Class E, containing a member int named number with default value 0.
     *        It also has constexpr methods get_number and set_number.
     */
    class E {
        int number = 0;

    public:
        /**
         * @brief Get the value of the number.
         * @return The current value of the number.
         */
        constexpr int get_number() const { return number; }

        /**
         * @brief Set the value of the number.
         * @param i The new value to set for the number.
         */
        constexpr void set_number(int i) { number = i; }
    };

    /**
     * @brief Function to test classes and structures.
     * @return A vector of pairs containing test descriptions and their results.
     */
    using Tasks = std::vector<std::pair<std::string, bool>>;
    Tasks assignment2();

}

#endif