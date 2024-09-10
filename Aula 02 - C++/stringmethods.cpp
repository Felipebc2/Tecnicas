#include <bits/stdc++.h>
using namespace std;

int main(){
    std::string r;                  // r == ""
    std::string s = "abra";         // s == "abra"
    s.push_back('c');               // s == "abrac"
    s.push_back('a');               // s == "abraca"
    s.pop_back();                   // s == abrac
    s.resize(3);                    // s == abr
    s[1];                           // retorna b
    s = s + "acadabra";             // s == abracadabra;
    s.clear();                      // s == ""
    s == r;                         // true;

    return 0;
}