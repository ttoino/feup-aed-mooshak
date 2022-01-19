#include <iostream>

int digitsSum(int n) {
    int r{0};
    while (n) {
        r += n % 10;
        n /= 10;
    }
    return r;
}

int main() {
    int t, n, k;

    std::cin >> t;

    for (int i{0}; i < t; ++i) {
        std::cin >> n >> k;

        while (digitsSum(++n) != k)
            ;

        std::cout << n << std::endl;
    }
}
