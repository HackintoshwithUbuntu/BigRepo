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


  if (rp > ro && bp > bo) {
    long rs = rp - ro;
    long bs = bp - bo;

    if (rs < 0) 
        rs = 0;
    if (bs < 0) 
        bs = 0;
    s -= (rs + bs);
    if (s < 0) 
        cout << "0";

    long ans = 0;
    ans += s + 1;

    cout << ans;
  }
  else{
        long rs = rp - ro;
        long bs = bp - bo;
        long ans1 = 0;
        long ans2 = 0;
        if(rs > 0)
            s -= rs;
        else
            ans1 -= rs;
        if(bs > 0)
            s -= bs;
        else
            ans2 -= bs;
        ans1 += s + 1;
        ans2 += s + 1;
        cout << min(ans1,ans2);
        
  }

  /*// (s - sqb) + ro < rp
  // (s - sqr) + bo < bp
  long sqr = rp - ro;
  long sqb = bp - bo;
  if(sqr < 0)
      sqr = 0;
  if(sqb < 0)
      sqb = 0;

  if((s - sqb) + ro < rp || (s - sqr) + bo < bp){
      cout << 0;
  }
  else{
      cout << min(s + ro - (rp + sqb + 1), s + bo - (bp + sqr + 1));
  }*/
  cout << "\n";
}