//198. House Robber
class Solution {
 public:
 int rob(vector<int>& nums) {
  if (nums.empty())
   return 0;
  if (nums.size() == 1)
   return nums[0];
  // dp[i] := the maximum money of robbing nums[0..i]
  vector<int> dp(nums.size());
  dp[0] = nums[0];
  dp[1] = max(nums[0], nums[1]);
  for (int i = 2; i < nums.size(); ++i)
   dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
  return dp.back();
 }
};



//832. Flipping an Image
class Solution {
public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    for (auto& row : image) {
      reverse(row.begin(), row.end());
      for (auto& pixel : row) {
        pixel = 1 - pixel;
      }
    }
    return image;
  }
};


// 78. 2D Matrix
class Solution {
public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = 0, col = matrix[0].size() - 1;
    while (row < matrix.size() && col >= 0) {
      int current = matrix[row][col];
      if (current == target) {
        return true;
      }
      if (current < target) {
        row++;
      } else {
        col--;
      }
    }
    return false;
  }
};



//771. Jewels and Stones
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (int i = 0; i < jewels.size(); i++) {
            for (int j = 0; j < stones.size(); j++) {
                if (jewels[i] == stones[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};



//1859. Sorting the Sentence
class Solution {
public:
    string sortSentence(string s) {
        
        string ans = "";
        for(int i = 1; i <= 9; i++)
        {
            if(s.find(to_string(i)) == string::npos) break;
            int end = s.find(to_string(i));
            cout << "end " << end << endl;
            int start = end;
            while(start >= 0 and s[start] != ' ') start--;
            if(start < 0) start = 0;
            int l = end - start;
            string temp = s.substr(start,l);
            cout << temp << endl;
            ans += temp;
            ans.push_back(' ');
        }
        cout << ans << endl;
        ans.erase(ans.length()-1,1);

        if(ans[0] == ' ') ans.erase(0,1);

        while(ans.find("  ") != string::npos)
        {
            int idx = ans.find("  ");
            ans.erase(idx,1);
        }
        return ans;
    }
};



// Reverse the String
#include <bits/stdc++.h>
string reverseString(string str)
{
 // Write your code here.
 int n=str.size();
 string r;
 for(int i=n-1;i>=0;i--){
 r+=str[i];
 }
 return r;
}


