/*
  time : O(1)
  space : O(n)
*/

class  tictactoe{
	private : 
	int rows[], cols[] ;
	int diag;
	int antidiag;
	
	public  : 
	  tictactoe(int n ){
	  	  rows = new int[n];
	  	  cols = new int[n];
	  }
	  
	  int move(int row , int col , int player){
	  	  int toadd = player == 1 ? 1 : -1;
	  	  
	  	  rows[row]+=todd;
	  	  cols[row]+=toadd;
	  	  
	  	  if(row == col){
	  	  	 diag = diag + toadd;
			}
			
	      if(row + col == cols.length() - 1){
	      	 antidiag = antidiag + toadd;
		  }
		  
		  int size = rows.length();
		  
		  if(abs(rows[row]) == size or  abs(cols[col]) == size or abs(diag) == size or abs(antidiag) == size){
		  	return player;
		  }
		  
		  return 0 ;
		  
	  }
	  
	  
	
};
