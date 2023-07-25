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
    sort(result.begin(), result.end());
    for(int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }
    return 0;
}
