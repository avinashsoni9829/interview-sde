#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];

bool isSubsetSum(int a[] , int n , int sum)
{
	  if(sum == 0 ) return true;
	  if(n == 0) return false;
	  if(dp[n][sum]!=-1) return dp[n][sum];
	  if(a[n - 1] > sum)
	  return  dp[n][sum] = isSubsetSum(a , n - 1 , sum);
	  
	  return  dp[n][sum] = (isSubsetSum(a , n - 1 , sum) || isSubsetSum(a , n - 1 , sum - a[n - 1]));
 	 
}

bool dpsol(int a[] , int n , int sum){
	 bool dp[n + 1][sum + 1];
	 
	for (int i = 0; i <= n; i++)
        dp[i][0] = true;
        
    for (int i = 1; i <= sum; i++)
        dp[0][i] = true;
		
	for(int i = 1 ; i <= n ; ++i){
		 for(int j = 1 ; j<=sum ; ++j){
		 	 if(a[i - 1] > j){
		 	 	 dp[i][j] = dp[i - 1][j];
			  }
			  else{
			  	 dp[i][j] = dp[i - 1][j] || dp[i][j - a[i  - 1]];
			  }
		 }
	}
	
	return dp[n][sum];
	    
}



int main(){
	memset(dp,-1,sizeof(dp));
	
	  int set[] = { 3, 34, 4, 12, 5, 2 };
    int sum = 9;
    int n = sizeof(set) / sizeof(set[0]);
    if (isSubsetSum(set, n, sum) == true)
        printf("Found a subset with given sum");
    else
        printf("No subset with given sum");
    return 0;
}
