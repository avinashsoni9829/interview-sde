#include<bits/stdc++.h>
using namespace std;


int dp[1000][1000];


int count(int a[] , int size , int sum){
	 if(sum == 0) return 1;
	 if(sum < 0) return 0 ;
	 if(size <= 0 and sum >=1 ) return 0;
	 if(dp[size][sum]!=-1) return dp[size][sum];
	 return  dp[size][sum] = (a[size - 1]<= sum)  ?  (count(a , size - 1, sum ) + count( a , size , sum - a[size - 1])) : (count(a,size - 1,sum));
	 
}

// top down

int dpcount(int a[] , int size , int sum){
    int dp[sum + 1];
    memset(dp,0 , sizeof(dp));
    // for sum = 0  we have 1 way 
	dp[0] = 1;
    
    for(int i = 0 ; i < size ; ++i){
    	 // for every coin we will try to include it or not if included  then j - a[i] remains other  j sum remains
		  
    	 
		 for(int j = a[i]; j<= sum ; ++j){
    	 	 dp[j] = dp[j] + dp[j - a[i]];
		 }
	}
	
	return dp[sum];
	
}


int main(){
	for(int i = 0 ; i < 1000 ; ++i){
		 for(int j = 0; j < 1000 ; ++j){
		 	 dp[i][j] = -1;
		 }
	}
	int i, j;
    int arr[] = {1, 2, 3};
    int m = sizeof(arr)/sizeof(arr[0]);
    printf("%d ", dpcount(arr, m, 4));
    getchar();
    return 0;
}
