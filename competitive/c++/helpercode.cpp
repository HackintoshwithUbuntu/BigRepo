#include <bits/stdc++.h>
using namespace std;

bool isEven(int n) {
  // n&1 is 1, then odd, else even
  // Change the 1 to any power of 2
  return (n & 1);
}

int dividePowerOf2(int i) {
  // Change the 1 to equal any power of 2
  return i >> 1;
}

int mulitplyPowerOf2(int i) {
  // Change the 1 to equal any power of 2
  return i << 1;
}

int count_digit(int number) {
  int count = 0;
  while (number != 0) {
    number = number / 10;
    count++;
  }
  return count;
}
// Alternate count_digit
int countDigit(int i) {
  string i_str;
  i_str = to_string(i);
  return (i_str.size());
}

vector<int> clean(vector<int> arrayc) {
  for (int i = 0; i < arrayc.size() - 1; i++) {
    if (arrayc[i] == arrayc[i + 1]) {
      arrayc.erase(arrayc.begin() + i);
      i--;
    }
  }
  return arrayc;
}

// initalise full array
bool trueorfalse[100] = {0};
vector<bool> beacht(100,false);

void returnalldigitsorcharacters(string str) {
  for (auto c : str)
    // Checking if digit
    if (isdigit(c)) break;
  // vector.push_back(c);
}

bool testIfCharacterInWord(char useIndexFromString) {
  for (auto x : "aeiouAEIOU") {
    // This will compare the string index (char) to each value of x, in this
    // case all the vowels The string index can be iterated over in another loop
    // if(x == useIndexFromString)
    // RETURN TRUE;
    break;
  }
  return false;
}

bool prime(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return false;
  }
  return true;
}

struct custom_hash {
    //http://codeforces.com/blog/entry/62393
    //unordered_map<long long, int, custom_hash> safe_map;
    //This hash function employs some time randoming and generates hashes very fast
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

vector <vector<int>>TWO_d_vector(int col, int row){
  vector <vector<int>> v;
  v.resize(col,vector<int>(row));

  // or (I'm not sure about row column order for the second one)

  vector<vector<int>> v(row, vector<int>(col));

  //v = {{1,2,3}, {4,5,6}, {7,8,9}}; 

  /** input from use **/
  for(int i=0; i<row; i++){
      for(int j=0; j<col; j++)
      {
        cin>>v[i][j];
      }
  }
  return v;
}

int returnxor(int n){
    // Find xor of 1 to n

    // If n is a multiple of 4
    if (n % 4 == 0)
      return n;
  
    if (n % 4 == 1)
      return 1;

    if (n % 4 == 2)
      return n + 1;

    return 0;
}

auto maxfrommap(unordered_map<int, int> m){
  auto x = std::max_element(m.begin(), m.end(),
    [](const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second; });

    // cout << ans->second << "\n";        // note pair referencing

  // you can also maintain a running tally 
  // eg. if current value bigger than last update, else keep going
  // or take all values in a vector and sort, then find longest same subsection
}


