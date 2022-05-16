class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       map<char,int>mp;
       int  i = -1;
       int  j = -1;
       int n = s.length();
       int ans = 0 ;
        
       while(true){
            bool f1 = false;
            bool f2 = false;
           
            // acquire 
           
            while(i < n - 1)
            {
                 f1 = true;
                 i = i + 1;
                 mp[s[i]]++;
                
                 if(mp[s[i]] == 2){
                      break;
                 }
                 else
                 {
                      ans = max(ans , i - j);
                 }
            }
            
            // release 
            while(j < i){
                 
                f2 = true;
                j  = j + 1;
                mp[s[j]]--;
                
                if(mp[s[j]] == 1) break;
                
            }
           
            if(!f1 && !f2) break;
       }
        
        return ans;
        
    }
};
