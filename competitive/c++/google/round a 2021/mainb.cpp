#include <bits/stdc++.h>

using namespace std;

void solve() {
    int r,c;
    cin >> r >> c;
    int a[r][c];
    for(int i = 0; i < r; i++){
        for(int m = 0; m < c; m++){
            int x; cin >> x;
            a[i][m] = x;
        }
    }

    /*for(int i = 0; i < r; i++){
        for(int m = 0; m < c; m++){
            cout << a[i][m];
        }
        cout << "\n";
    }*/


    long long ans = 0;

    // i is x from top left and m is y from top left

    for(int i = 0; i < c; i++){
        for(int m = 0; m < r; m++){
            if(a[m][i]){
                int cu = 1, cd = 1, cl = 1, cr = 1;
                // left
                if(i != 0){
                    int y = i;
                    while(y-->0){
                        if(a[m][y])
                            cl++;
                        else
                            break;
                    }
                }
                // right
                if(i != c - 1){
                    int y = i;
                    while(y++<c-1){
                        if(a[m][y])
                            cr++;
                        else
                            break;
                    }
                }
                // up
                if(m != 0){
                    int y = m;
                    while(y-->0){
                        if(a[y][i])
                            cu++;
                        else
                            break;
                    }
                }
                // down
                if(m != r - 1){
                    int y = m;
                    while(y++<r-1){
                        if(a[y][i])
                            cd++;
                        else
                            break;
                    }
                }

                // checking
                if(cu >= 2 && cl >= 2)
                    for(int i = cu; i > 1; i--){
                        if(i * 2 == cl || ((float)i/2) == (float)cl)
                            ans++;
                    }
                if(cu >= 2 && cr >= 2)
                    for(int i = cu; i > 1; i--){
                        if(i * 2 == cr || ((float)i/2) == (float)cr)
                            ans++;
                    }
                if(cd >= 2 && cl >= 2)
                    for(int i = cd; i > 1; i--){
                        if(i * 2 == cl || ((float)i/2) == (float)cl)
                            ans++;
                    }
                if(cd >= 2 && cr >= 2)
                    for(int i = cd; i > 1; i--){
                        if(i * 2 == cr || ((float)i/2) == (float)cr)
                            ans++;
                    }
            }
        }
    }


    cout << ans << "\n";
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, i = 1;
    cin >> t;
    while(t--) {
        cout << "Case #" << i << ": ";
        solve();
        ++i;
    }
    return 0;
}