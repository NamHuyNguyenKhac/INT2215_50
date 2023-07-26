#include <bits/stdc++.h>

using namespace std;


int main() {
    int leng = 3;
    vector<char> char_h = {'a', 'b', 'c', 'd'};
    int num_char = char_h.size();
    int a[leng];
    for(int i = 0; i < leng; i++) {
        a[i] = 0;
    }
    for(int i = 0; i < leng; i++) {
                cout << char_h.at(a[i]);
            }
        cout << endl;
    int amount = pow(char_h.size(),leng);
    for(int j = 0; j < amount-1; j++) {
        a[leng-1]++;
        for(int i = leng-1; i>= 0; i--) {
            if(a[i] > char_h.size()-1) {
                a[i] = 0;
                a[i-1]++;
            }
        }
        for(int i = 0; i < leng; i++) {
                cout << char_h.at(a[i]);
            }
        cout << endl;
    }
}
