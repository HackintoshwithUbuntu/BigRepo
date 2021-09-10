#include <bits/stdc++.h>

using namespace std;

// with a only every power of a in set
// with b every multiple of b + 1
// so n - 1 % b == 0

// check multiple var def in func call 
bool last(long n, long a, long b){
    while(true){
    if(n % a == 0)
        n = n/a;
    else
        n -= b;

    if(n < 1)
        return false;
    if(n == 1)
        return true;
    }
}

bool isPower(long x, long y)
{
    // crdit: geeksforgeeks
    // logarithm function to calculate value
    long res1 = log(y) / log(x);
    double res2 = log(y) / log(x); // Note : this is double
 
    // compare to the result1 or result2 both are equal
    return (res1 == res2);
}

void solve() {
    long n,a,b;
    cin >> n >> a >> b;
    bool done = false;

    if((n - 1)% b == 0)
        done = true;
    else if(n == 1)
        done = true;
    else if(isPower(a,n) == true)
        done = true;
    else if(last(n,a,b))
        done = true;

    if(done)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
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