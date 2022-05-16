#include<bits/stdc++.h>
using namespace std;


void f(root , int&sum){
	 if(root == NULL) return ;
	 
	 f(root -> right , sum);
	 
	 sum  = sum  + root -> data;
	 
	 root -> data = sum - root ->data;
	 
	 f(root -> left , sum);
	 
}



void transform(root){
	  int sum = 0 ;
	  f(root , sum);
}

int main(){
	 root;
	 transform(root);
}
