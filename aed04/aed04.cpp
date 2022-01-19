#include <iostream>
#include <string>

int digitsSum(unsigned long long n) {
    int r{0};
    while (n) {
        r += n % 10;
        n /= 10;
    }
    return r;
}

int digitsSum(const char *n) {
    int r{0};
    while (*n)
        r += *n++ - '0';

    return r;
}

int main() {
    unsigned long long t, n, k;

    std::cin >> t;

    for (int i{0}; i < t; ++i) {
        std::cin >> n >> k;

        if (digitsSum(n) == k)
            n += 9;

        if (digitsSum(n) > k) {
            std::string str{std::to_string(n)};
            str.insert(str.begin(), '0');
            while (digitsSum(n) > k) {
                for (auto i = str.end() - 1, end = str.begin(); i >= end; --i) {
                    if (*i != '0') {
                        do {
                            *i = '0';
                            *(i - 1) += 1;
                        } while (*(--i) == '9' + 1);
                        break;
                    }
                }
                n = std::stoll(str);
            }
        }

        if (digitsSum(n) < k) {
            unsigned long long diff{k - digitsSum(n)};
            std::string str{std::to_string(n)};
            bool filled{false};
            while (diff) {
                if (!filled) {
                    filled = true;
                    for (auto i = str.end() - 1, end = str.begin(); i >= end;
                         --i) {
                        if (*i != '9') {
                            *i = *i + diff > '9' ? '9' : *i + diff;
                            filled = false;
                            break;
                        }
                    }
                } else
                    str.insert(str.begin(), diff > 9 ? '9' : '0' + diff);
                diff = k - digitsSum(str.c_str());
            }
            n = std::stoll(str);
        }

        std::cout << n << std::endl;
    }
}
