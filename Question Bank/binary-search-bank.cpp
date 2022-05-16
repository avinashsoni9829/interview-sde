1. Find Single Non Repeating Number 

ex : 1 1 2 2 3 4 4 5 5 
[    l     l h

 iteration : 
  1 .  low = 0 , high= 8   , mid = 4
 
] 


int findSingle(int a[] , int n)
{
	
	 
	  int low = 0  , high = n -  1;
	  
	  while( low <= high){
	  	  
	  	  if(low == high) break;
	  	  
	  	  
	  	  int mid = (low + high) / 2;
	  	  
	  	  if(mid % 2 == 0){
	  	  	   if(a[mid ] == a[ mid + 1]){
	  	  	   	  low = mid  + 2;
	  	  	   } 
	  	  	   else
	  	  	   {
	  	  	   	  high = mid ;
	  	  	   }
	  	  }
	  	  else
	  	  {
	  	  	   if(a[mid] == a[mid - 1]){
	  	  	   	 low = mid + 1;
	  	  	   }
	  	  	   else
	  	  	   {
	  	  	   	 high = mid - 1;
	  	  	   }
	  	  }
	  	  
	  	  
	  }
	  
	  return a[low];
	  
	  
}


========================================================================


2.Search in rotated Sorted Array : 

[

 0   1  2  3 4 5 6 7
 11 12 15 18 2 5 6 8 
 L                 H
 
 search = 15
 
 low = 0 , high = 7 
 mid = 3 
 ( a[mid + 1] < a[mid]) 


]

int search(int a[] , int n, int v){
	   int low = 0 ,  high = n - 1;
	   
	   while(low <= high){
	   	  int mid = (low + high) / 2;
	   	  
	   	  if(a[mid] == v) return mid;
	   	  
	   	  	
	   	  if(a[low] <= a[mid]){
	   	  	
	   	  	 // sorted half 
	   	  	 
	   	  	 if(target <= a[mid]  and target >=a[low]){
	   	  	 	 high = mid - 1;
	   	  	 }
	   	  	 else
	   	  	 {
	   	  	 	 low = mid + 1;
	   	  	 }
	   	  	  
	   	  }
	   	  else
	   	  {
	   	  	   if(target >= a[mid] and target <= a[high]){
	   	  	   	    low = mid + 1;
	   	  	   }
	   	  	   else
	   	  	   {
	   	  	   	   high = mid - 1;
	   	  	   }
	   	  }
	   }
	   
	   return - 1;
	   
	  
}



========================================================================


