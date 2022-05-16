class Solution {
public:
    /*
      string ! = pattern -> false 
      string == pattern -> check diagonal above 
      . -> check diagonal above 
      * -> 2 rows above or if character before *  matches string then previous col
           if any of them true  -> true
           otherwise -> false 
           
           
      
    */
    bool isMatch(string s, string p) {
        
        int n = s.length();
        int m = p.length();
        
        bool dp[m + 1][n + 1];
        
         
        for(int i = 0 ; i <= m ; ++i){
             for(int j = 0 ; j<=n ; ++j){
                 
                 
                   if(i == 0 and j == 0){
                        dp[i][j] = true;
                   }
                   else  if(i == 0)
                   {
                        
                        dp[i][j] = false;
                   }
                   else 
                   if(j == 0)
                       {
                           
                        char pc = p[i  - 1];
                         
                        if(pc == '*')
                        {  
                             dp[i][j] = dp[i - 2][j];
                        }
                        else
                        {
                             dp[i][j] = false;
                        }
                   }
                   else
                   {
                        char pc = p[i - 1];
                        char sc = s[j - 1];
                       
                        if(pc == '*'){
                           dp[i][j] = dp[i - 2][j];
                           if(p[i - 2] == '.' || p[i - 2] == sc){
                                dp[i][j] = dp[i][j] || dp[i][j - 1];
                           }
                        }
                        else
                     if(pc == '.')
                     {
                      dp[i][j] = dp[i - 1][j - 1];
                     }
                   else
                    if(pc == sc)
                    {
                       dp[i][j] = dp[i - 1][j - 1];
                     }
                    else
                    {
                         dp[i][j] = false;
                        
                    }
                        
                   }
             }
        }
        
        return dp[m][n];
        
    }
};
