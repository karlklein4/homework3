#include <compare>

namespace Homework {
    using Tasks = std::vector<std::pair<std::string, bool>>;
    Tasks assignment3();

    class Default {
    private:
        int number = 0;

    public:
        Default() : number(0) {}

        Default(int i) : number(i) {}

        Default(const Default& other) : number(other.number) {}

        Default& operator=(const Default& other) {
            if (this != &other) {
                number = other.number;
            }
            return *this;
        }

        bool operator==(const Default& other) const {
            return number == other.number;
        }

        std::strong_ordering operator<=>(const Default& other) const {
            return number <=> other.number;
        }

        ~Default() {}
    };

    class Op {
    private:
        float number = 0.f;

    public:
        Op() : number(0.f) {}

        Op(float i) : number(i) {}

        Op(const Op& other) : number(other.number) {}

        Op(Op&& other) noexcept : number(std::move(other.number)) {}

        Op& operator=(const Op& other) {
            if (this != &other) {
                number = other.number;
            }
            return *this;
        }

        Op& operator=(Op&& other) noexcept {
            if (this != &other) {
                number = std::move(other.number);
            }
            return *this;
        }

        bool operator==(const Op& other) const {
            return number == other.number;
        }

        std::partial_ordering operator<=>(const Op& other) const {
            return number <=> other.number;
        }

        ~Op() {}
    };
}