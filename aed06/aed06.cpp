#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    unsigned int n, q, p;
    std::vector<unsigned int> s{}, sums{};
    std::cin >> n;

    for (unsigned int i{0}; i < n; ++i) {
        unsigned int si;
        std::cin >> si;
        s.push_back(si);
    }

    for (auto i = s.begin(), end = s.end(); i < end; ++i)
        for (auto j = i + 1; j < end; ++j)
            sums.push_back(*i + *j);

    std::sort(sums.begin(), sums.end());
    sums.erase(std::unique(sums.begin(), sums.end()), sums.end());

    std::cin >> q;

    for (unsigned int i{0}; i < q; ++i) {
        std::cin >> p;

        std::size_t start{0}, end{sums.size() - 1}, mid;
        while (start + 1 < end) {
            mid = (start + end) / 2;

            if (sums.at(mid) > p)
                end = mid;
            else
                start = mid;
        }

        unsigned int da = abs(p - sums.at(start)), db = abs(sums.at(end) - p);

        if (da < db)
            std::cout << sums.at(start) << std::endl;
        else if (db < da)
            std::cout << sums.at(end) << std::endl;
        else
            std::cout << sums.at(start) << ' ' << sums.at(end) << std::endl;
    }
}
