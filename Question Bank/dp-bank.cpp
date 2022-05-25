1.Coin Change Problem : 

int count(int s[] , int m , int n){
	  int dp[n + 1];
	  
	  memset(dp,0,sizeof(dp));
	  
	  dp[0] = 1;
	  
	  for(int i = 0 ; i < m ; ++i){
	  	 for(int j = S[i] ; j<=n ; ++j){
	  	 	 dp[j] = dp[j] + dp[j - s[i]];
	  	 	 
	  	 	 
	  	 }
	  }
	  
	  return dp[n];
	  
	  
}



2.Subset Sum Problem 

bool isSubset(int n , int arr[] , int sum){
	
	    bool dp[n + 1][sum + 1];
	    
	    for(int i = 0  ; i <= n ; ++i){
	    	 dp[i][0] = true;
	    }
	    
	    for(int i = 1; i<=sum ; ++i){
	    	 dp[0][i] = false;
	    }
	    
	    
	    
	    for(int i = 1 ;  i <= n ; ++i){
	    	 for(int j = 1 ; j<= sum ; ++j){
	    	 	 if( j < arr[i - 1]){
	    	 	 	 dp[i][j] = dp[i - 1][j];
	    	 	 }
	    	 	 else
	    	 	 {
	    	 	 	 dp[i][j] = dp[i - 1][j] || dp[i - 1][j  - arr[ i - 1]];
	    	 	 	 
	    	 	 }
	    	 }
	    }
	    
	    return dp[n][sum];
	    
}


3.Rod Cutting Problem : 

int rodcut(vector<int>a , int n)
{
	  int dp[n + 1] = {0};
	  
	  dp[0]  = 0 ;
	  
	  for(int i = 1 ; i<= n ; ++i){
	  	 int mx = INT_MIN;
	  	 for(int j = 0 ; j < i ; ++j){
	  	 	 mx = max (mx , a[j] + dp[i - j - 1]);
	  	 }
	  	 dp[i] = mx;
	  }
   
    return dp[n];
}

4.



