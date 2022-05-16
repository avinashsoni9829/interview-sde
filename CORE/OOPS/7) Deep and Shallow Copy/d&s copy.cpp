/* 

 shallow and deep copy

  how we can create a copy of object ?
  
   -  copy constructor 
   -  impilicit copy assignment operator 
   


*/


#include<bits/stdc++.h>
using namespace std;

class Dummy{
	private: 
	int a , b;
	int * p;
	public :
	Dummy(){
		p  = new int;	
	} 
	void setData(int x ,int y ,int z){
		a = x;
		b = y;
		*p = z;
	}
	void showData(){
		cout<<" a = "<<a<<"  b = "<<b<<endl;
	}
	/*
	   shallow copy  [ how the compiler does it ]  
	   
	   Dummy (Dummy & d){
		 a = d.a; 
		 b = d.b;
		 p = d.p;
	}
	
	*/
	
	Dummy (Dummy &d){
		a = d.a ;
		b = d.b;
		// yaha pe d.p ke address pe jo value h wo copy hua h naki same address
		// to yaha ek naya pointing value banega aur waha pe apne ko d ke pointer ki value daal denge 
		// to ab d1 ka pointer ka alag block hoga and d2 ke pointer ka alg block hoga 
		
		*p = *(d.p);
	}
	
	// to avoid memory leakage 
	
	~ Dummy(){
		delete  p ; 
	}
	
	
};

int main(){
	 Dummy d1;
	 d1.setData(3,4);
      // yaha pe copy constructor ki madad se ho raha h  
      // Shallow copy hoga yaha pe kyunki humne khud ka copy constructor nahi  banaya h  
	 Dummy d2 = d1;
	 // yaha pe d3 me data assignment operator ki  madad se copy ho raha h  
	 // 
	 
	 /*
	   # shallow copy :
	    ab humne d1 object banaya pehle se and  d2 me d1 ko assign kia to agar hum explcitly naya object me memory assign karke nahi copy karnege 
		to compiler one to one copy kar dega har cheez  ko  as a shallow copy
		isse kya hoga ki jaise  ki d1 object ka pointer  p jis location ko point kar raha hoga
		d2 ka object bhi usi location ko  point karega  
		
		to agar hum d1 ka object delete kar de to d2 ka object abhi  bhi d1 ke pointer ko point kar raha hoga 
		isse Dangling Pointer ka problem and memory leakage ka problem arise hoga 
		
	 */
	 Dummy  d3 ;
	 d3 = d1;
	 
	 d2.showData();
	 
	 getch();
}
