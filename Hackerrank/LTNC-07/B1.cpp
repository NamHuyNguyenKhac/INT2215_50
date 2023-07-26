#include <bits/stdc++.h>

using namespace std;

int Binary_Search(vector<int> &vec, int key) {
    int left = 0, right = vec.size(), mid;
    while(left <= right) {
        mid = (left + right) / 2;
        if(vec[mid] == key) {
            return mid+1;
            break;
        }
        if(key > vec[mid]) {
            left = mid + 1;
        }
        else if(key < vec[mid]) {
            right = mid - 1;
        }
    }
    if(left > right) return 0;
}
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> res;
    int k;
    for(int i = 0; i < n; i++) {
        cin >> k;
        res.push_back(k);
    }
    int result = Binary_Search(res, x);
    cout << result;
}
