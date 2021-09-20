#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    freopen("addin.txt", "r", stdin);
    freopen("addout.txt", "w", stdout);

    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}