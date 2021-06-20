#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a; 
    string q;
    string tlast;
    char ttlast;

    cin >> a >> q;

    string qu = q;

    int len = q.length();
    char last = q[len - 1];
    string slast = q.substr(len - 2, 2);
    char sslast = q[len - 2];

    if (len > 3){
    string tlast = q.substr(len - 3, 3);
    char ttlast = q[len - 3];}

    if(last == 's' || last == 'z' || last == 'x' || slast == "ch" || slast == "sh"){
        q.append("es");
    }else if (last == 'o' && (sslast != 'a' && sslast != 'e' && sslast != 'i' && sslast != 'o' && sslast != 'u' && sslast != 'y')){
        q.append("es");
    }else if (last == 'y' && (sslast != 'a' && sslast != 'e' && sslast != 'i' && sslast != 'o' && sslast != 'u' && sslast != 'y')){
        q.resize(len - 1);
        q.append("ies");
    }else if (slast == "fe" && ttlast != 'f'){
        q.resize(len - 2);
        q.append("ves");
    }else if (last == 'f' && sslast != 'f'){
        q.resize(len - 1);
        q.append("ves");
    }else{
        q.append("s");
    }

    if(a == 0){
        cout << "no " << q;
    }else if (a == 1){
        cout << "one " << qu;
    }
    else{
        cout << a << " " << q;
    }
    cout << "\n";
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