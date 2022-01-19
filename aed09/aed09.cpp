#include <iostream>
#include <list>
#include <string>

int main() {
    int n{}, k{}, l{};

    std::cin >> n;
    std::cin.get();

    for (int i{0}; i < n; ++i) {
        char c{'*'};
        std::string name{};
        std::list<std::string> names{};

        l = 0;
        while (c != '\n')
            if ((c = std::cin.get()) == ' ')
                ++l;

        std::cin >> k;

        for (int j{0}; j < k; ++j) {
            std::cin >> name;
            names.push_back(name);
        }
        std::cin.get();

        auto j{names.begin()};
        while (names.size() > 1) {
            size_t m{l % names.size()};
            for (size_t g{0}; g < m; ++g)
                if (++j == names.end())
                    j = names.begin();

            j = names.erase(j);
            if (j == names.end())
                j = names.begin();
        }
        if (*j == "Carlos")
            std::cout << "O Carlos nao se livrou\n";
        else
            std::cout << "O Carlos livrou-se (coitado do " << *j << "!)\n";
    }
}
