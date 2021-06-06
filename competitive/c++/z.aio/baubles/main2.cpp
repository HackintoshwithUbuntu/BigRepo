#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("baublesin.txt", "r", stdin);
    freopen("baublesout.txt", "w", stdout);
    long ro, bo, s, rp, bp;
    cin >> ro >> bo >> s >> rp >> bp;

    // Removing inital case
    if (ro + s < rp || bo + s < bp) {
    cout << "0";
    return 0;
    }

    if(bp == 0){
        ro += s;
        s = 0;
    }
    if(rp == 0){
        bo += s;
        s = 0;
    }

    // Trying to do blues
    long bq = 0;
    long sfb = ro + s - rp;
    if(sfb > s)sfb = s;
    bq = sfb + bo - bp + 1;
    if(bq < 0){ 
    cout << "0";
    return 0;}


    // Trying to do reds
    long rq = 0;
    long sfr = bo + s - bp;
    if(sfr > s)sfr = s;
    rq = sfr + ro - rp + 1;
    if(rq < 0){ 
    cout << "0";
    return 0;}

    cout << min(bq,rq);
}