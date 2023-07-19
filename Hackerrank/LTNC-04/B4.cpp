#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<vector<int>> v1;
    int a, b;
    cin>> a >> b;
    for(int i = 0;i < a; i++) {
        int k;
        cin >> k;
        vector<int> temp;
        for(int j = 0; j<k; j++) {
            int l;
            cin>>l;
            temp.push_back(l);
        }
        v1.push_back(temp);
        temp.clear();
    }
    for(int i = 0; i < b; i++) {
        int x, y;
        cin>> x >> y;
        cout<< v1[x][y] << endl;;
    }
    return 0;
}
