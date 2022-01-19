#include <iostream>
#include <queue>
#include <string>

struct Flight {
    Flight() {}
    Flight(std::string name, unsigned int minute)
        : name(name), minute(minute) {}

    std::string name;
    unsigned int minute;
};

void helper(std::queue<Flight> &q, const Flight &f, unsigned int &m) {
    if (m < f.minute)
        m = f.minute;
    q.emplace(f.name, m++ - f.minute);
}

int main() {
    int c{}, l{}, a{};

    std::cin >> c;

    for (int i{0}; i < c; ++i) {
        std::queue<Flight> lq{}, aq{}, lqf{}, aqf{};
        std::cin >> l >> a;

        for (int j{0}; j < l; ++j) {
            Flight f{};
            std::cin >> f.name >> f.minute;
            lq.push(f);
        }

        for (int j{0}; j < a; ++j) {
            Flight f{};
            std::cin >> f.name >> f.minute;
            aq.push(f);
        }

        unsigned int m{1};
        while (lq.size() && aq.size()) {
            Flight lf{lq.front()}, af{aq.front()};

            if (lf.minute < af.minute) {
                lq.pop();
                helper(lqf, lf, m);
            } else {
                aq.pop();
                helper(aqf, af, m);
            }
        }
        while (lq.size()) {
            Flight lf{lq.front()};
            lq.pop();
            helper(lqf, lf, m);
        }
        while (aq.size()) {
            Flight af{aq.front()};
            aq.pop();
            helper(aqf, af, m);
        }

        std::cout << lqf.size() << ' ' << aqf.size() << std::endl;
        while (lqf.size()) {
            Flight lf{lqf.front()};
            lqf.pop();
            std::cout << lf.name << ' ' << lf.minute << std::endl;
        }
        while (aqf.size()) {
            Flight af{aqf.front()};
            aqf.pop();
            std::cout << af.name << ' ' << af.minute << std::endl;
        }
    }
}
