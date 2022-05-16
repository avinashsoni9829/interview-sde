/*
   virtual destructor 
   
   
*/

#include<bits/stdc++.h>
using namespace std;


class A {
	private :  int a;
	public : 
	void f1 () {};
	
	// virtual desctuctor 
	// isse compiler ko pata chalega ki iski early binding nahi karni h 
	// agar parent class ka destructor virtual hoga to derived class wala automatically virtual destructor ban jaayega 
	
	virtual  ~ A(){
		
	};
	
};

class B : public A {
	 private : int b ;
	 public : void f2() { }; 
	 ~B(){
	 	
	 };
};

int fun();
int fun (){
	A *p = new B;
	// this will work
	p -> f1();
	// this wont work due to early binding 
	//p -> f2();
	
	/*
       Ab hum suppose karo derived class me A class ke pointer ko bana ke ek object bananyega
	   usme A ke data members and B ke data members bhi honge
	   
	   compiler delete p  pe aayeaaga tab usko nahi pata h ki  p me kiska address h 
	   to wo pointer ke type mane ki A ke destructor ko call karega and usse A wale jo bhi part h object me wo to delete ho jaayenge 
	   par B wale reh jaayenge kyunki B wlae ka destructor call nahi hua due to early binding
	   
	   	
 	
	*/
	delete p ; // isse jisko P point kar raha h  wo delete hoga naki  p ka 
	
	/*
         ab jab humne virtual bana dia h to
		 jab delete p  karnege to compiler pehele B class ke destructor ko call karega aur b se related memory ko free kar dega 
		 uske baad jo apne usually dekhete h   ki compiler derived class ke destructor ko call karne ke baad base class ke destructor ko call karta
		 h to wo hoga 
		 and b ke object me jo A ke part h wo bhi delete ho jaayenge and isse ekdam sahi tarike se b ka object delete ho jaaeyaga and 
		 no memeory leak hoga 
		 
		 isilye virtual desctrutor ka use kara jaata h taki run time pe derived class ka descturtor bhi call ho sake  
		 	
	*/
	
	
}

