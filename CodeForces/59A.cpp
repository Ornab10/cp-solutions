/*
problem link - https://codeforces.com/problemset/problem/59/A
problem name -word
problem no- 59A
*/

#include <iostream>


using namespace std;

int main() {
    string s;
    cin >> s;

    int upper = 0, lower = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i]))
            upper++;
        else
            lower++;
    }

    if (upper > lower) {
        // convert to uppercase
        for (int i = 0; i < s.length(); i++)
            s[i] = toupper(s[i]);
    } else {
        // convert to lowercase
        for (int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
    }

    cout << s;
    return 0;
}
