

void insertion(int a[] , int n ){
	
	 for(int i = 1; i < n ; ++i){
	 	  int key = a[i];
	 	  int curr = i - 1; 
	 	  
	 	  while(curr >=0 and a[curr] > key){
	 	  	 a[curr+1] = a[curr];
	 	  	 curr = curr - 1;
		   }
		   
		   a[curr+1] = key;
	 }
}



