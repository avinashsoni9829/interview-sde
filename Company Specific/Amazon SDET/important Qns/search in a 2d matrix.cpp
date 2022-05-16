//search in a 2d matrix
/*
  time : O(log(n * m ))
  
  

*/

bool search(vector<vector<int>>&matrix , int target){
	  int n =  matrix.size();
	  int m = matrix[0].size();
	  
	  int low = 0 , high = n - 1;
	  
	  while(low <= high){
	  	  int mid = (low + high) / 2;
	  	  
	  	  if(matrix[mid / m][mid % m] == target){
	  	  	   return true;
		  }
		  else
		  if(matrix[mid /m][mid % m] > target){
		  	  high = mid - 1;
		  }
		  else
		  {
		  	 low = mid + 1;
		  }
	  }
	  
	  return false;
	  
}
