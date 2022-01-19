#include <iostream>
#include <vector>

struct Node {
    Node *left{0};
    Node *right{0};
};

int size(Node n) {
    int l{0}, r{0};

    if (n.left)
        l = 1 + size(*n.left);
    if (n.right)
        r = 1 + size(*n.right);

    return std::max(l, r);
}

int main() {
    int t, n, p;

    std::cin >> t;

    for (int i{0}; i < t; ++i) {
        std::cin >> n;

        std::vector<Node> nodes(n);

        for (int j{1}; j < n; ++j) {
            std::cin >> p;

            Node &l = nodes.at(p - 1);
            if (l.left)
                l.right = &(nodes.at(j));
            else
                l.left = &(nodes.at(j));
        }

        std::vector<std::vector<Node>> levels(size(nodes.at(0)) + 1);

        levels.at(0).push_back(nodes.at(0));

        for (int j{1}; j < levels.size(); ++j) {
            for (const Node &n : levels.at(j - 1)) {
                if (n.left)
                    levels.at(j).push_back(*n.left);
                if (n.right)
                    levels.at(j).push_back(*n.right);
            }
        }

        bool first{true};
        for (const auto &l : levels) {
            if (first)
                first = false;
            else
                std::cout << ' ';

            std::cout << l.size();
        }
        std::cout << std::endl;
    }
}