 /*
Problem No: 617A
Problem Name: Elephent
Link- https://codeforces.com/problemset/problem/617/A

*/

#include<iostream>
using namespace std;

int main()
{
int x;

cin>>x;

     if(x%5==0){
   int ans= x/5;
      cout <<ans;
      }
      else{
      int ans=(x/5)+1;
      cout << ans;
      }






return 0;
}
