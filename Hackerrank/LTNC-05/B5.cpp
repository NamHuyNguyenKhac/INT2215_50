#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    set<int> res;
    cin >> n;
    int y, x;
    for(int i = 0; i < n; i++) {
        cin >> y >> x;
        if(y == 1) res.insert(x);
        else if(y == 2) res.erase(x);
        else if(y == 3) {
            set<int>::iterator itr=res.find(x);
            if (itr != res.end()) cout << "Yes" << endl;
        else cout << "No" << endl;
        }
    }
    return 0;
}



