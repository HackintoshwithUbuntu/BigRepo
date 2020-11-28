#include<bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        printf("%d ",i%n+1);
    }
    printf("\n");
}
int main(){
    int t=1;
    scanf("%d",&t);
    while(t--){
        solve();
    }
}