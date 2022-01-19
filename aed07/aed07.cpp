#include <iostream>
#include <vector>

int main() {
    unsigned int n, d, p, k, max{0}, sum{0};
    std::vector<unsigned int> days{};

    std::cin >> n;

    for (unsigned int i{0}; i < n; ++i) {
        std::cin >> d;
        days.push_back(d);
        sum += d;
        if (d > max)
            max = d;
    }

    std::cin >> p;

    for (unsigned int i{0}; i < p; ++i) {
        std::cin >> k;

        unsigned int low{max}, high{sum};

        while (low < high) {
            unsigned int mid{(high + low) / 2}, d{1}, s{0};

            for (unsigned int day : days) {
                s += day;
                if (s > mid) {
                    s = day;
                    d++;
                }
            }

            if (d <= k)
                high = mid;
            else
                low = mid + 1;
        }

        std::cout << low << std::endl;
    }
}
