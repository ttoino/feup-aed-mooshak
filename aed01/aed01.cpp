#include <iostream>

int main() {
    int n, s, r{0};

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> s;
        if (s == 42)
            ++r;
    }

    std::cout << r << std::endl;
}
