#include <bits/stdc++.h>

using namespace std;        
int main() {
    freopen("baublesin.txt", "r", stdin);
    freopen("baublesout.txt", "w", stdout);
    long ro, bo, s, rp, bp;
    cin >> ro >> bo >> s >> rp >> bp;

    // Removing inital case
    if(ro + s < rp || bo + s < bp) {
        cout << "0";
        return 0;
    }
    if(s == 0){
        long rq = ro - rp + 1;
        long bq = bo - bp + 1;
        if(rq < 0)
            rq = 0;
        if(bq < 0)
            bq = 0;
        cout << min(bq,rq) << "\n";
        return 0;
    }
    if(bp == 0){
        ro += s;
        long rq = ro - rp + 1;
        if(rq < 0)
            rq = 0;
        cout << rq << "\n";
        return 0;
    }
    if(rp == 0){
        bo += s;
        long bq = bo - bp + 1;
        if(bq < 0)
            bq = 0;
        cout << bq << "\n";
        return 0;
    }


}