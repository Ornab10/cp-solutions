/*
problem no- 271A
name- Beautiful year
Link- https://codeforces.com/problemset/problem/271/A
*/


#include <iostream>
using namespace std;

int main()
{

   int y;
   cin >>y;


    while(1){
     y++;

      string s = to_string(y); //convert year to string for easy access

        if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] &&
            s[1] != s[2] && s[1] != s[3] &&
            s[2] != s[3]) {
                cout<< y << endl;
                break;
    }

    }

return 0;

}
