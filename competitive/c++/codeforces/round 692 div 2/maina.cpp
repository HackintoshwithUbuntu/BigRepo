#include <bits/stdc++.h>

using namespace std;

int n;

void solve() {
    
    string str;
    cin >> n >> str;
    int count = 0;

    for(int i=n-1;i>=0;i--)
        if(str[i]==')'){
            count++;
      } else{
            break;
      }

    if(count>(n-count)){
      cout << "yes" << "\n";
    }else{
      cout << "no" << "\n";
    }

}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {   
        solve();
    }
    return 0;
}