#include<bits/stdc++.h>
using namespace std;

class A{ 
   private : 
   int a,b;
   int *p;
   
   public : 
   A() {
   	 a = 0 ;
   	 b = 0 ;
     p = new int;	 
   }
   A(int x,int y,int z){
   	a  = x ;
   	b  = y ;
   	*p = z;
   }
};

/*
    dynamic constructor 
    
   *  constructor ke madad se object me jo pointer h usko memory allocate karate h  toh use dynamic constructor kehte h 
   *  for ex class ke 3 data members h  int a, int b ; int  * p 
   *  ab humne object banaya class ka
   *  jab yeh member banega to object ke *p pointer me jiska address hoga us block ko hum constructor ki madad se banayege 
      wo constructor dynamic constructor hota  h 
     
	 *p  = new int ;
     *p = 5;
     
 
*/
int main()
{
	  A o1,o2,o3(3,4,5);
	  
	  // yaha pe o3 me jo ban raha h wo dynamic constructor h  
	  
	  
}
