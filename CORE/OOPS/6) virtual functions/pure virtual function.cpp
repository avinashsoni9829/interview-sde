/* pure virtual function */ 

#include<bits/stdc++.h>
using namespace std;

class person{
	public :
	// pure virtual function 
	  virtual void fun () = 0 ;
		/*
		  this is do nothing function 
		  object of this class cannot be created 
		  as we cant call this function 
		  so if the object is created  - > function can be called
		  hence it is not allowed to create object of this class
		*/
};
class student : public person{
	
	/*
	  derived class 
	  now it can create a object and call the fuction fun ()
	  
	  so the rule for this is that 
	  ki agar apn kisi base class jisme pure function h 
	  usko derive karte h toh yeh compulsory h ki 
	  derived class me us function ki  overriding kari  jaaye 
	  
	  to ab agar student class ka object fun function ko call karega to isme phir student wla hi call hoga 
	  as per concept of early binding 
	  
	*/
	
	/*  
	    
		it is a must have condition 
	    otheriwse this class will also not be able to make any child
	    
	    but agar yaha bhi hum base class ka pointer banaye to  base class wlaa function fun chal jaayega 
	    isilye hume ab virtual keyword ka use karna parega kyunki hum nahi chahte ki base class ka fun kisi bhi state me call ho jaaye 
	    
	    ab jab base class wala function virtual hogaya h to ab late binding hogi and ab koi chance nahi h ki base class wala call hoga 
	    kyunki humko child class me override karna hi parega 
	    
	    
	    # now comes the defination of abstract class
	    
	    wo class jisme ek bhi pure virtual function h  wo abstract class hoti  h 
	    us class ka koi function nahi ban sakta h 
	    
	    agar hum student class me define nahi karna chahte to hume waha bhi same pure virtual function banana parega aur B ki derived class
	    me define karenge 
	    
	    
	    # use of abstract class ? 
	    draw wla case 
	    person - >  student  ->  teacher wala case 
	    
	    
	    
	   */
	void fun(){
		 
	} 
};

int main(){
	 
}
