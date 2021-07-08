  int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr,arr+n);
        sort(dep,dep+n);
        
        int curr = 1 ;
        int mx = 1;
        
        int i = 1  , j = 0 ;
        
        while(i<n and j<n)
        {
            int incoming = arr[i];
            int departing = dep[j];
            
            if(incoming<=departing)
            {
                  curr = curr + 1;
                  mx = max(mx,curr);
                  i = i + 1;
                  
            }
            else
            {
                if(incoming > departing)
                {
                     curr = curr - 1;
                   mx = max(mx,curr);
                     j = j + 1;
                }
            }
            
              
        }
        mx = max(mx,curr);
        return mx;
        
    }
