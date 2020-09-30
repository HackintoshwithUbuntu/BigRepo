#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{

  class Solution
  {
  public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
      for (int i = 0; i < nums.size(); ++i)
      {
        for (int z = 1; z < nums.size(); ++z)
        {
          if(nums[i] + nums[z] == target){
            vector<int> s;
            s.push_back(i);
            s.push_back(z);
            return s;
          }
        }
      }
    }
  };
}