/* virtual function in c++  */

/*
   # Base class pointer :
   
    base class pointer can point to the object of any of its descendant class 
  
   but converse is not true
      
 */
 
 #include<bits/stdc++.h>
 using namespace std;
 
 class A{
 	public : 
   virtual void f1() {
 		cout<<"Base class function"<<endl;
 		 
	 };
 };
 
 class B : public A{
 	public :
 		void f1(){
 			cout<<"Child class function "<<endl;
 			
		 };
		 
		 void f2(){
          cout<<"f2"<<endl;		 	
		 };
 };
 
 int main(){
 	  	A * p , ob;
 	  	B ob1;
 	  	
 	  	p = & ob1 ;
 	  	
		p -> f1();
		/*
		   yeh call karte waqt compiler ko nahi pata h ki p me kiska address h kyunki p = & ob1 ko abhi memory assign nahi hui h aur wo runtime
		   pe hogi 
		   to compiler is case me base class ke f1 ko call kardega 
		   jabki humne p ko  derived class ke object se address dia h 
		   to uska f1 function call hona chahiye 
		   but call base class ka hota  h 
		   
		   how to overcome ? 
		   
		    isse bachne ke lie hum koshish karenge ki early binding na hoye 
		    hum chhate h ki run time pe binding ho 
		    taki us time compiler ko pata chale ki usme kiska address  h 
		    
		  
		    iske lie hum base class wale f1 function ke aage virtual keyword likhenge 
		    usse compiler ko pata chalega ki is function ki late binding karni h 
		    
			so isme pointer ke type ko nahi pointer ke content ko aadhar mana jaaega 
			    
		
		   
		*/
		
 	  	
 }
 
 


