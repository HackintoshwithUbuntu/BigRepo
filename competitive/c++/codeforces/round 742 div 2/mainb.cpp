#include <bits/stdc++.h>

using namespace std;

int returnxor(int n){
    // Find xor of 1 to n

    // If n is a multiple of 4
    if (n % 4 == 0)
      return n;
  
    if (n % 4 == 1)
      return 1;

    if (n % 4 == 2)
      return n + 1;

    return 0;
}

void solve() {
    int a, b;
    cin >> a >> b;
    int pXor;
    if (a % 4 == 1) {pXor = a - 1;}
    else if (a % 4 == 2) {pXor = 1;}
    else if (a % 4 == 3) {pXor = a;}
    else {pXor = 0;}
 
    if (pXor == b) {cout << a << '\n';}
    else if ((pXor ^ b) != a) {cout << a + 1 << '\n';}
    else {cout << a + 2 << '\n';}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}