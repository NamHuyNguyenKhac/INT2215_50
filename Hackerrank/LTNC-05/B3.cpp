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
    int a, b, c;
    cin >> a >> b >> c;
    result.erase(result.begin()+ a-1);
    result.erase(result.begin()+ b-1, result.begin() + c-1);
    cout << result.size() << "\n";
    for(int i = 0; i < int(result.size()); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
