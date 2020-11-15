class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> s;
        for (int i = 0; i < nums.size(); ++i)
      {
        for (int z = i + 1; z < nums.size(); ++z)
        {
          if(nums[i] + nums[z] == target){
            s.push_back(i);
            s.push_back(z);
          }
        }
      }
        return s;
    }
};