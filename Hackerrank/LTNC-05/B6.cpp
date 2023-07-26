#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    map<string, int> res;
    cin >> n;
    int type, y;
    string x;
    for(int i = 0; i < n; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x >> y;
            res[x] += y;
        }
        else if(type == 2) {
            cin >> x;
            res.erase(x);
        }
        else if(type == 3) {
            cin >> x;
            map<string,int>::iterator itr=res.find(x);
            if (itr != res.end()) cout << itr->second << endl;
        else cout << "0" << endl;
        }
    }
    return 0;
}



