#include <fstream>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    freopen("cookiesin.txt", "r", stdin);
    freopen("cookiesout.txt", "w", stdout);

    int ans;
    float d, c0, p1, c1, p2, c2;
    cin >> d >> c0 >> p1 >> c1 >> p2 >> c2;

    // calculate time to buy each factory
    float b1 = ceil(p1/c0); // then production increases to c0 + c1
    float t1 = b1 * c0 + (d-b1) * (c0 + c1) - p1;

    float b2 = ceil(p2/c0);
    float t2 = b2 * c0 + (d-b2) * (c0 + c2) - p2;

    
    // time to buy if other is bought first
    float b12 = b1 + ceil(p2/(c0+c1));
    float t12 = b1 * c0 + (b12 - b1) * (c0 + c1) + (d - b12) * (c0 + c1 + c2) - p1 - p2;

    float b21 = b2 + ceil(p1/(c0+c2));
    float t21 = b2 * c0 + (b21 - b2) * (c0 + c2) + (d - b21) * (c0 + c1 + c2) - p1 - p2;
    // time taken if no factories are bought
    float t0 = c0 * d;

    ans = max({t0, t1, t2, t12, t21});

    cout << fixed;
    cout << ans;
}