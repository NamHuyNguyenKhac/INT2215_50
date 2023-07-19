#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    cin >> n;
    vector<int> arrA;
    for(int i = 0; i < n; i++){
        cin >> k;
        arrA.push_back(k);
    }
    vector<int> arrB;
    for(int i = 0; i < n+1; i++){
        cin >> k;
        arrB.push_back(k);
    }
    for(int i = 0; i < n+1; i++) {
        bool found = false;
        for(int j = 0; j < int(arrA.size()); j++) {
            if(arrB[i] == arrA[j]) {
                found = true;
                arrA.erase(arrA.begin()+j);
                break;
            }
        }
        if(!found) {
            cout << arrB[i];
            return 0;
        }
        if(arrA.empty()) {
            cout << arrB[n];
            return 0;
        }
    }
    return 0;
}
