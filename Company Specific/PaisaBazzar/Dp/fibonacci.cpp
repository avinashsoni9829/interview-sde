#include<bits/stdc++.h>
using namespace std;

int dp[1000];

int fib(int n){
	 if(n == 0) return 0;
	 if(n == 1) return 1;
	 if(dp[n]!=-1) return dp[n];
	 return  dp[n] = fib(n - 1) + fib(n - 2);
	 
	
	 
}
int fibdp(int n){
	 int dp[n + 1];
	 dp[0] = 0;
	 dp[1] = 1;
	 for(int i = 2 ; i<= n ; ++i){
	 	 dp[i] = dp[i - 1] + dp[i - 2];
	 }
	 
	 return dp[n];
	 
}

// matrix chain exponentiation technique 
void mul(int F[2][2] , int M[2][2]);
void pow(int F[2][2], int n);

int fib(int n)
{
	int F[2][2] = {{1,1} , {1 , 0}};
	
	 if(n == 0) return 0;
	 pow(F, n- 1);
	 return F[0][0];
}
void mul(int F[2][2],int M[2][2]){
	 int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
	 int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
	 int z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
	 int w = F[1][0] * M[0][1] + F[1][1] * M[1][1];
	 
	 F[0][0] = x;
	 F[0][1] = y;
	 F[1][0] = z;
	 F[1][1] = w;
	 
}

void pow(int F[2][2] , int n){
	 if(n == 0 or n == 1) return ;
	 
	 int m[2][2] = {{1 , 1} , { 1 , 0}};
	 
	 pow(F, n / 2);
	 
	 mul(F,F);
	 
	 if(n&1) mul(F,M);
	 
}


int main(){
	 for(int i = 0 ; i < 1000 ; ++i)
	 {
	 	 dp[i] = -1;
	 }
	 
     
	 	 
}
