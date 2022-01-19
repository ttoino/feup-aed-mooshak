#include <iostream>
#include <stack>

int main() {
    long long n{}, a{};
    char c{};

    std::cin >> n;

    for (int i{0}; i < n; ++i) {
        std::cin.get();
        std::stack<long long> s{};
        bool error = false;

        while ((c = std::cin.peek()) != '\n') {
            if (error) {
                std::cin.get();
            } else if (c <= '9' && c >= '0') {
                std::cin >> a;
                s.push(a);
            } else if (c == '+' || c == '-' || c == '*' || c == '/') {
                if (s.size() < 2) {
                    error = true;
                    continue;
                }

                std::cin.get();
                a = s.top();
                s.pop();

                if (c == '+')
                    s.top() += a;
                else if (c == '-')
                    s.top() -= a;
                else if (c == '*')
                    s.top() *= a;
                else
                    s.top() /= a;
            } else
                std::cin.get();
        }

        if (error || s.size() > 1)
            std::cout << "Expressao Incorrecta" << std::endl;
        else
            std::cout << s.top() << std::endl;
    }
}
