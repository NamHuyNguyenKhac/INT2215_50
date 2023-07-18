#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    char k;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a+b << endl;
    k = a[0];
    a[0] = b[0];
    b[0] = k;
    cout << a << " " << b;
    return 0;
}
