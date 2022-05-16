#include<bits/stdc++.h>
using namespace std;

int lis(int a[] , int n)
{
	 int dp[n];
	 dp[0] = 1;
	 
	 for(int i = 1; i < n ; ++i){
	 	 dp[i] = 1;
	 	 for(int j = 0 ; j < i ; ++j)
		  {
	 	 	 if(a[i] > a[j] && dp[i] < dp[j] + 1)
	 	 	 dp[i] = dp[j] + 1;
		  }
	 }
	 
	 return *max_element(dp, dp + n);
	 
}


int main(){
	int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Length of lis is %d\n", lis(arr, n));
 
    return 0;
}
