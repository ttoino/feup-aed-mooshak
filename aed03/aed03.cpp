#include <iostream>
#include <map>

const int N{23 * 23 * 10 * 10 * 10 * 10};

const std::map<char, long long> charmap{
    {'A', 0},  {'B', 1},  {'C', 2},  {'D', 3},  {'E', 4},  {'F', 5},  {'G', 6},
    {'H', 7},  {'I', 8},  {'J', 9},  {'L', 10}, {'M', 11}, {'N', 12}, {'O', 13},
    {'P', 14}, {'Q', 15}, {'R', 16}, {'S', 17}, {'T', 18}, {'U', 19}, {'V', 20},
    {'X', 21}, {'Z', 22}, {'0', 0},  {'1', 1},  {'2', 2},  {'3', 3},  {'4', 4},
    {'5', 5},  {'6', 6},  {'7', 7},  {'8', 8},  {'9', 9},
};

long long matToNum(const char mat[9]) {
    long long gen{(bool)isalpha(mat[6]) + 2 * (bool)isalpha(mat[3]) +
                  2 * (bool)(isalpha(mat[0]) * isalpha(mat[6]))};
    long long r{gen * N};
    long long n;

    switch (gen) {
    case 0:
        n = charmap.at(mat[0]);
        n = n * 23 + charmap.at(mat[1]);
        n = n * 10 + charmap.at(mat[3]);
        n = n * 10 + charmap.at(mat[4]);
        n = n * 10 + charmap.at(mat[6]);
        n = n * 10 + charmap.at(mat[7]);
        return r + n;
    case 1:
        n = charmap.at(mat[6]);
        n = n * 23 + charmap.at(mat[7]);
        n = n * 10 + charmap.at(mat[0]);
        n = n * 10 + charmap.at(mat[1]);
        n = n * 10 + charmap.at(mat[3]);
        n = n * 10 + charmap.at(mat[4]);
        return r + n;
    case 2:
        n = charmap.at(mat[3]);
        n = n * 23 + charmap.at(mat[4]);
        n = n * 10 + charmap.at(mat[0]);
        n = n * 10 + charmap.at(mat[1]);
        n = n * 10 + charmap.at(mat[6]);
        n = n * 10 + charmap.at(mat[7]);
        return r + n;
    case 3:
        n = charmap.at(mat[0]);
        n = n * 23 + charmap.at(mat[1]);
        n = n * 23 + charmap.at(mat[6]);
        n = n * 23 + charmap.at(mat[7]);
        n = n * 10 + charmap.at(mat[3]);
        n = n * 10 + charmap.at(mat[4]);
        return r + n;
    }

    return -1;
}

int main() {
    int t;
    char mat1[9], mat2[9];

    std::cin >> t;

    for (int i{0}; i < t; ++i) {
        std::cin >> mat1 >> mat2;

        std::cout << abs(matToNum(mat1) - matToNum(mat2)) << std::endl;
    }
}
