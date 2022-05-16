class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
           int m = nums1.size();
           int n = nums2.size();
        
           
           if(m > n) return findMedianSortedArrays(nums2 , nums1);
        
           int low = 0 , high = m;
        
        
           while(low <= high){
              
               
               int i1 = (low) + (high - low) / 2;
               
               int i2 = (n  + m + 1)/2 - i1;
               
               /*
                
                 Left Half :                         rigth half : 
                 arr[0 .... i1 - 1]                 arr[i1 ...... n]
                 brr[0 ..... i2 - 1]                brr[i2 .......m]
                  
               */
               
               // we want that max of left half < min of right half
               
               
               
               int maxL = (i1 == 0) ? INT_MIN : nums1[i1 - 1];
               int minL = (i1 == m) ? INT_MAX : nums1[i1];
               
               int maxR = (i2 == 0) ? INT_MIN : nums2[i2 - 1];
               int minR = (i2 == n) ? INT_MAX : nums2[i2];
               
               
               if(maxL <= minR and maxR <= minL){
                    if((n + m)% 2 == 0)
                    {
                         return (double)(max(maxL,maxR) + min(minL,minR))/2;
                        
                    }
                   else
                   {
                        return (double)(max(maxL,maxR));
                   }
               }
               else
                   if(maxL > minR)
                   {
                        high = i1  - 1;
                   }
                 else
                 {
                    low = i1 + 1;
                 }
              
           }
        
        return -1.0;
        
    }
};
