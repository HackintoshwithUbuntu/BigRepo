#include <bits/stdc++.h>

using namespace std;


void solve() {
    int z;
    cin >> z;
    int nums[z];
    for(int i = 0; i < z; i++){
        int zz;
        cin >> zz;
        nums[i] =  zz;
    }

    int left = 0;
    int right = 1;
    int ans = 0;

    for(int i = 0; right <= z; i++){
        int dif = nums[right] - nums[left];
        right++;
        int tempans = 2;
        while(nums[right] == nums[right - 1] + dif){
            tempans++;
            right++;
        }
        left = right;
        right++;
        if(tempans > ans)
            ans = tempans;
    }

    
    cout << ans << "\n";
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, i = 1;
    cin >> t;
    while(t--)
    {   
        cout << "Case #" << i << ": ";
        solve();
        ++i;
    }
    return 0;
}