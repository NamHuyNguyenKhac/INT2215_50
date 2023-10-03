#include <bits/stdc++.h>

using namespace std;

int main() {
    string k, words = "ICELAND;MEXICO;PANAMA;ALMATY";
    vector<string> wordList;
    k.clear();
    for(int i = 0; i < (int)words.length(); i++) {
        if(words[i] == ';' || i == words.length()-1) {
            wordList.push_back(k);
            k.clear();
        }
        else {
            k += words[i];
        }
    }
    for(int i = 0; i < wordList.size(); i++) {
        cout << wordList.at(i) << "\n";
    }
}
