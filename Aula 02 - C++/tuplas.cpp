#include <bits/stdc++.h>
using namespace std;

int main() {
    tuple<int, int, string> t = {1, 2, "IDP"};

    cout << get<2>(t) << endl;                      // IDP
    auto [i, j, s] = t;
    cout << i << " - " << j << " - " << s << endl;  // 1 - 2 - IDP

    return 0;
}