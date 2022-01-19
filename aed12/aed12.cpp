#include <cmath>
#include <iostream>

long long mod(long long a, long long b) { return (b + (a % b)) % b; }

long long *g(long long n, long long k) {
    if (n < k) {
        long long *r = new long long[k - 1];

        for (size_t i{0}; i < k - 1; ++i)
            r[i] = i;

        return r;
    }

    double nl{n - floor((double)n / k)};
    long long *r = g(nl, k);

    for (size_t i{0}; i < k - 1; ++i)
        r[i] = floor((k * mod(r[i] - mod(n, k), nl)) / ((double)k - 1));

    return r;
}

int main() {
    long long n{}, k{}, m{}, a{};

    std::cin >> n >> k >> m;

    auto r = g(n, k);
    a = r[0];

    for (size_t i{1}; i < k - 1; ++i)
        if (m)
            a = std::min(a, r[i]);
        else
            a = std::max(a, r[i]);

    std::cout << a + 1 << std::endl;

    delete[] r;
}
