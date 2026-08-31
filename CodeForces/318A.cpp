// https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>
using namespace std;

int main()

{
    long long n, k, partitiopnvalue, output;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        partitiopnvalue = n / 2;
    }
    else
    {
        partitiopnvalue = n / 2 + 1;
    }

    if (k <= partitiopnvalue)
    {
        output = (2 * k - 1);
    }
    else
    {
        output = (k - partitiopnvalue) * 2;
    }

    cout << output << endl;
    return 0;
}
