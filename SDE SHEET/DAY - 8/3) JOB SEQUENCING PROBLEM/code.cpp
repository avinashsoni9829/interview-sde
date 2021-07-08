int mx = a[0].dead;
	
	for(int i = 1; i < n ; ++i)
	{
		  mx = max(mx,a[i].dead);
	}
	
	int slot[mx+1];
	
	for(int i = 0 ; i <= mx ; ++i)
	{
		  slot[i] = -1;
	}
	
	int count = 0;
	int profit = 0 ;
	
	for(int i = 0 ; i < n ; ++i )
	{
		  for(int j = arr[i].dead ; j>0 ; j--)
		  {
		  	  if(slot[j] == -1)
		  	  {
		  	   
				  slot[j] = i ;
				  count = count + 1;
				  profit = profit + arr[i].profit;
				  break;	  
			  }
		  }
	}
	
