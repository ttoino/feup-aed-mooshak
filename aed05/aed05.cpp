#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Letter {
    char letter;
    unsigned int freq;

    friend bool operator<(const Letter &first, const Letter &second) {
        return first.freq > second.freq;
    }

    friend bool operator==(const Letter l, const char c) {
        return l.letter == c;
    }
};

int main() {
    std::string in{};
    std::vector<Letter> letters{};
    std::cin >> in;

    for (char c : in) {
        auto l = std::find(letters.begin(), letters.end(), c);

        if (l != letters.end())
            (*l).freq++;
        else
            letters.push_back({c, 1});
    }

    std::stable_sort(letters.begin(), letters.end());

    for (auto l : letters)
        std::cout << l.letter << ' ' << l.freq << std::endl;
}
