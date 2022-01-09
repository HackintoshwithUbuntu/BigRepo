#include <fstream>
#include <iostream>
#include <cmath>
#include <algorithm>
// Why so much math :( from other solutions it looks like you could also have solved with a loop simulating each day
using namespace std;

void solve() {
    float ans = 0, d, c0, p1, c1, p2, c2;
    cin >> d >> c0 >> p1 >> c1 >> p2 >> c2;

    // calculate time to buy each factory
    float b1 = ceil(p1/c0); // then production increases to c0 + c1
    float t1 = ceil(b1 * c0 + (d-b1) * (c0 + c1) - p1);
    if(b1 <= d) ans = max(ans, t1);

    float b2 = ceil(p2/c0);
    float t2 = ceil(b2 * c0 + (d-b2) * (c0 + c2) - p2);
    if(b2 <= d) ans = max(ans, t2);
    
    // time to buy if other is bought first
    float b12 = ceil((p2 + p1 - c0 * b1) / (c0 + c1));
    float t12 = ceil(b1 * c0 + b12 * (c0 + c1) + (d - b12 - b1) * (c0 + c1 + c2) - (p1 + p2));
    if(b12 <= d && b1 <= d) ans = max(ans, t12);

    float b21 = ceil((p1 + p2 - c0 * b2) / (c0 + c2));
    float t21 = ceil(b2 * c0 + b21 * (c0 + c2) + (d - b21 - b2) * (c0 + c1 + c2) - (p1 + p2));
    if(b21 <= d && b2 <= d) ans = max(ans, t21);

    // time taken if no factories are bought
    float t0 = c0 * d;
    ans = max(ans, t0);

    cout << fixed; // Took me a while to find this line
    cout << (int)ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("newin.txt", "r", stdin);
    freopen("cookiesout.txt", "w", stdout);
    
    int t = 1000;
    while(t--) {
        solve();
    }
    return 0;
}