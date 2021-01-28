#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("baublesin.txt");
    ofstream out("baublesout.txt");
    long ro, bo, s, rp, bp;
    in >> ro >> bo >> s >> rp >> bp;

    // (s - sqb) + ro < rp
    // (s - sqr) + bo < bp
    long sqr = rp - ro;
    long sqb = bp - bo;
    if(sqr < 0)
        sqr = 0;
    if(sqb < 0)
        sqb = 0;

    if((s - sqb) + ro < rp || (s - sqr) + bo < bp){
        out << 0;
    }
    else{
        out << min(s + ro - (rp + sqb + 1), s + bo - (bp + sqr + 1));
    }
    out << "\n";

    in.close();
    out.close();
    return 0;
}