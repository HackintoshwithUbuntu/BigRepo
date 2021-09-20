#include <bits/stdc++.h>

using namespace std;

int k, ans = 1000000000;

void recurse(int start, int count, int done, vector<int> &arr){
    if(count > ans)
        return;
    int cp = arr[start];
    arr.erase(arr.begin() + start);
    done++;
    if(done == k){
        ans = min(count,ans);
        arr.insert(arr.begin() + start, cp);    // Undoing
        return;
    }
    // check right
    if(arr.size() > start)
        recurse(start, count + (arr[start] - cp), done, arr);
    // check left
    if(start - 1 > -1)
        recurse(start-1, count + (cp - arr[start-1]), done, arr);

    // undo changes
    arr.insert(arr.begin() + start, cp);
    return;
}

int main() {
    freopen("ladyin.txt", "r", stdin);
    freopen("ladyout.txt", "w", stdout);

    int n,q;
    cin >> n >> k >> q;
    vector<int> tree(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        tree[i] = x;
    }
    // The tree has been populated

    // Lets start scenarios
    for(int i = 0; i < q; i++){
        ans = 1000000000;
        int sp; cin >> sp;
        int count = 0;

        // find closest element
        auto lowb = lower_bound(tree.begin(),tree.end(), sp);
        int index = distance(tree.begin(), lowb);

        if(tree[index] == sp){
            recurse(index, 0, 0, tree); // index is same as sp
        }
        else if(lowb == tree.end()){ // When sp is bigger than all elements
            recurse(n - 1, sp - tree[n - 1], 0, tree);
        }
        else if(index == 0){ // when first is bigger than sp
            recurse(0, tree[0] - sp, 0, tree);
        }
        else if(tree[index] != sp){
            recurse(index, tree[index] - sp, 0, tree);  // index bigger than sp
            recurse(index - 1, sp - tree[index - 1], 0, tree); // sp bigger than index
        }


        cout << ans << " ";
    }

    cout << "\n";
}