#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    char type;
    s.pop_back();
    type = s.back();
    s.pop_back();
    char h1, h2;
    h1 = s[0];
    h2 = s[1];
    int hour;
    hour = h1 - '0';
    hour = hour * 10 + (h2 - '0');
    if(type == 'A') {
        if(hour == 12) hour = 0;
    }
    if (type == 'P') {
        if(hour != 12) hour += 12;
    }
    h2 = (hour % 10) + '0';
    hour /= 10;
    h1 = hour + '0';
    s[0] = h1;
    s[1] = h2;
    return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
