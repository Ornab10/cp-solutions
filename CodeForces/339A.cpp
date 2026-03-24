
/*
link- https://codeforces.com/problemset/problem/339/A
problem name - helpful maths
no- 339A


*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    string nums = "";

    // Extract numbers
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            nums += s[i];
        }
    }

    // Sort numbers
    sort(nums.begin(), nums.end());

    // Print result
    for (int i = 0; i < nums.length(); i++) {
        cout << nums[i];
        if (i != nums.length() - 1) {
            cout << "+";
        }
    }

    return 0;
}
