#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

unsigned int getOverlap(const string &s1, const string &s2, string &s) {
    unsigned int max{0}, n{s1.length()}, m{s2.length()}, minl{min(n, m)};

    if (s1.find(s2) != string::npos) {
        s = s1;
        return m;
    } else if (s2.find(s1) != string::npos) {
        s = s2;
        return n;
    }

    for (unsigned int i{0}; i <= minl; i++)
        if (s1.compare(0, i, s2, m - i, i) == 0 && i > max) {
            max = i;
            s = s2 + s1.substr(i);
        }

    for (unsigned int i{0}; i <= minl; i++)
        if (s2.compare(0, i, s1, n - i, i) == 0 && i > max) {
            max = i;
            s = s1 + s2.substr(i);
        }

    return max;
}

void genShortestSuperstring(vector<string> &strings) {
    unsigned int n = strings.size();

    while (n != 1) {
        unsigned int max{0}, p{}, q{};
        string r;

        for (unsigned int i{0}; i < n; ++i)
            for (unsigned int j{i + 1}; j < n; ++j) {
                string s;
                unsigned int o{getOverlap(strings.at(i), strings.at(j), s)};

                if (o > max) {
                    max = o;
                    r = s;
                    p = i;
                    q = j;
                }
            }

        --n;

        if (max == 0)
            strings.at(0) += strings.at(n);
        else {
            strings.at(p) = r;
            strings.at(q) = strings.at(n);
        }
    }
}

int main() {
    unsigned int n, q;
    const char c{'6'};

    for (char filename[]{"inp1.txt"}; filename[3] <= c; ++filename[3]) {
        ifstream file{filename};
        vector<string> strings{};
        string s{};

        file >> n >> q;

        for (unsigned int i{0}; i < n; i++) {
            file >> s;
            strings.push_back(s);
        }

        genShortestSuperstring(strings);

        if (strings.at(0).length() <= q)
            cout << strings.at(0).length() << endl << strings.at(0) << endl;
        else
            cout << "0\n\n";

        file.close();
    }
}
