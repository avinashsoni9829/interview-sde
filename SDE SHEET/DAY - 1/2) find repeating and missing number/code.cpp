vector<int> Solution::repeatedNumber(const vector<int> &A) {
        
         int n = A.size();

         int xorr = 0 ;

         for(int i = 0 ; i < n ; ++i){
            xorr^=A[i];
            xorr^=(i +1);
         }
         
         int mask = (xorr) & ~(xorr - 1);

         int x = 0 , y = 0 ;

         for(int i = 0 ; i < n ; ++i){
               if(A[i]& mask){
                    x = x ^ A[i];
               }
               else{
                    y = y ^ A[i];
               }
         }


         for(int  i = 1 ; i <= n; ++i){
               if(i & mask){
                    x = x ^ i;
               }
               else
               {
                    y = y ^ i;
               }
         }
         
          int rep =  0 , miss = 0 ;

         for(int i =  0 ; i < n ; ++i){
                if(x == A[i]){
                      rep = x;
                      miss = y;
                      break;
            
                }

                if(y == A[i]){
                     rep = y;
                     miss  = x;
                     break;
                }
         }

         return {rep , miss};
         

}

