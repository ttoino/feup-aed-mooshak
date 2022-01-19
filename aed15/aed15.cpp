#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void loadTree(std::vector<int> &tree) {
    std::string n;

    std::cin >> n;

    if (n != "N") {
        loadTree(tree);
        tree.push_back(std::stoi(n));
        loadTree(tree);
    }
}

int main() {
    int t{}, n{};

    std::cin >> t;

    for (int i{0}; i < t; ++i) {
        std::vector<int> tree{};
        loadTree(tree);

        std::cout << (std::is_sorted(tree.begin(), tree.end()) ? "sim" : "nao")
                  << std::endl;
    }
}
