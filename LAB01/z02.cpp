#include <cstdlib>
#include <iostream>

template <typename T>
T sum(const T& a, const T& b) {
    return a + b;
};

template <typename T>
T product(const T& a, const T& b) {
    return a * b;
};

int main() {
    double first = 3.5;
    double second = 3.5;
    std::cout << "SUM 2 + 2 = " << sum(2, 2) << std::endl;
    std::cout << "SUM 2.5 + 2.5 = " << sum(second, first) << std::endl;
    std::cout << "PRODUCT 2 * 2 = " << product(2, 2) << std::endl;
    std::cout << "PRODUCT 2.5 * 2.5 = " << product(2.5, 2.5) << std::endl;

    return 0;
}