// Ideia: Ir buscar a root ao início da preorder
//        Dividir o inorder em dois pelo índice da root
//        Voltar a chamar a funcao com preorder[1:] e a parte esquerda do
//        inorder para a árvore esquerda e com a parte direita para a árvore
//        direita
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

struct Node {
    int label{-1};
    Node *left{0};
    Node *right{0};
};

Node *getNode(std::queue<int> &preorder,
              std::vector<int>::iterator inorder_start,
              std::vector<int>::iterator inorder_end) {
    if (inorder_start == inorder_end)
        return NULL;

    Node *node{new Node{}};

    node->label = preorder.front();
    preorder.pop();

    auto label_it{std::find(inorder_start, inorder_end, node->label)};

    node->left = getNode(preorder, inorder_start, label_it);
    node->right = getNode(preorder, label_it + 1, inorder_end);

    return node;
}

void print(Node *node, int &leaves) {
    if (node->left) {
        print(node->left, leaves);
        std::cout << ' ';
    }

    if (node->right) {
        print(node->right, leaves);
        std::cout << ' ';
    }

    if (!node->left && !node->right)
        ++leaves;

    std::cout << node->label;

    delete node;
}

int main() {
    int t{}, n{}, p{};

    std::cin >> t;

    for (int i{0}; i < t; ++i) {
        std::cin >> n;

        std::queue<int> preorder{};
        std::vector<int> inorder{};

        for (int j{0}; j < n; ++j) {
            std::cin >> p;

            preorder.push(p);
        }

        for (int j{0}; j < n; ++j) {
            std::cin >> p;

            inorder.push_back(p);
        }

        Node *node{getNode(preorder, inorder.begin(), inorder.end())};

        int leaves = 0;
        print(node, leaves);
        std::cout << std::endl << "Folhas = " << leaves << std::endl;
    }
}
