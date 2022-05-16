class Solution {
public:
    string longestPalindrome(string s) {
          
            int  n = s.length();
            int dp[n][n];
            int start = 0 , end  = 0;
            for(int g = 0 ; g < n ; ++g){
                  for(int r = 0 , c = g ; c < n ; ++r ,++c){
                        if(g == 0) dp[r][c]  = true;
                        else
                        if(g == 1) dp[r][c] = (s[r] == s[c]);
                        else
                        dp[r][c] = (s[r] == s[c]) && dp[r + 1][c - 1];
                      
                      if(dp[r][c]){
                          
                          start = r;
                          end = g + 1;
                    
                      }
                  }
            }
        
    
        
        return s.substr(start , end);
    }
};
