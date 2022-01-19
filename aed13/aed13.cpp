#include <iostream>
#include <vector>

struct Node {
    Node *left;
    Node *right;
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

        std::cout << size(nodes.at(0)) << std::endl;
    }
}
