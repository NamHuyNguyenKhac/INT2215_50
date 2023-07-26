#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    int k;
    cin >> N;
    vector<int> result;
    for(int i = 0; i < N; i++) {
        cin >> k;
        result.push_back(k);
    }
    int a;
    cin >> a;
    for(int i = 0; i < a; i++) {
        cin >> k;
        for(int j = 0; j < int(result.size()); j++) {
            if(result.at(j) >= k) {
                if(result.at(j) == k) {
                    cout << "Yes " << j+1 << endl;
                    break;
                }
                else {
                    cout << "No " << j+1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
