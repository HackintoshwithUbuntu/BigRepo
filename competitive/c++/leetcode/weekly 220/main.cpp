#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string reformatNumber(string number) {
        vector<char> nums;

        for(auto x : number){
            if(x >= '0' && x <= '9') nums.push_back(x);
        }
        string ans = "";

        while(nums.size() > 4){
            if(ans.size()) ans += "-";

            for(int i = 0; i < 3; i++) {
            ans += nums[0];
            nums.erase(nums.begin());
          }
        }
        if(ans.size()) ans += "-";
        if(nums.size() == 2){
            ans += nums[0];
            ans += nums[1];
        }
        if(nums.size() == 3){
            ans += nums[0];
            ans += nums[1];
            ans += nums[2];
        }
        if(nums.size() == 4){
            ans += nums[0];
            ans += nums[1];
            ans += "-";
            ans += nums[2];
            ans += nums[3];
        }
        return ans;

    }
};