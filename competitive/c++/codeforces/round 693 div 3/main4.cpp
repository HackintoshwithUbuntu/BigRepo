#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> odd(n);
    vector<int> even(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x%2==0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int a = 0;
    int b = 0;

    while(even.empty() == false && odd.empty() == false){
        a += even[0];
        even.erase(even.begin());
        b += odd[0];
        odd.erase(odd.begin());
    }

    while(even.empty() == false){
        a += even[0];
        even.erase(even.begin());
        even.erase(even.begin());
    }
    while(odd.empty() == false){
        odd.erase(odd.begin());
        b += odd[0];
        odd.erase(odd.begin());
    }

    if(a > b)
        cout << "Alice" << "\n";
    else if(b > a)
        cout << "Bob" << "\n";
    else
        cout << "Tie" << "\n";
    

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