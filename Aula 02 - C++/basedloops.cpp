#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet = {2, 3, 4, 8, 5, 3, 2, 1};
    cout << "Forma 1: ";
    for (auto it = vet.begin(); it != vet.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Forma 2: ";
    for (auto x: vet) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}