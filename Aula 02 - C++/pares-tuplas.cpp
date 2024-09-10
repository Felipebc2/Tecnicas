#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p1 = {1, 2};
    pair<int, double> p2 = {1, 2.5};
    pair<double, string> p3 = make_pair(2.5, "IDP");
    pair<vector<int>, pair<int, double>> p4 = {{1, 2, 3}, p2};

    cout << p1.first << " - " << p1.second << endl;             // 1 - 2
    cout << p3.first << " - " << get<1>(p3) << endl;            // 2.5 - IDP
    cout << p4.first.size() << " - " << p4.second.first << endl;// 3 - 1

    return 0;
}