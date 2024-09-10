#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<double>> vet = {
                                    {1.1, 2.2, 3.3},
                                    {2.1, 1.2, 0.3},
    };
    vector<vector<double>>::iterator it1;
    vector<double>::iterator it2;

    for (auto it1 = vet.begin(); it1 != vet.end(); it1++) {
        for (auto it2 = it1->begin(); it2 != it1->end(); it2++) {
            cout << *it2 << " ";
        }
        cout << endl;
    }
    return 0;
}