#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet = {2, 3, 4, 8, 5, 3, 2, 1};
    cout << "Forma 2: ";
    for (auto x: vet) {
        x++;
    }
    cout << endl;

    cout << "Forma 3: ";
    for (auto x: vet) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Forma 4: ";
    for (const auto &x: vet) {
        // ...
    }
    cout << endl;

    return 0;
}