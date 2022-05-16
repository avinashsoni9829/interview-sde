/*
   time : O( n )
   space : O( n * n )
   
   
*/
const int size = 3;

class tictactoe{
	private : 
	 char board[][];
	 char X = 'X';
	 char O = 'O';
	 int size;
	 
	 public : 
	 
	 tictactoe(int  n){
	 	 board = new char[n][n];
	 	 size = n ;
	 }
	 
	 int move(int row , int col , int player){
	 	 char c;
	 	 if(player == 1){
	 	 	 c = X;
	 	 	 
		  }
		  else
		  {
		  	 c = O;
		  }
		  
		  if(board[row][col]!='.'){
		  	return  0;
		  }
		  
		  board[row][col] = c;
		  
		  if(haswon(row , col , size, c)){
		  	return player;
		  }
		  
		  return 0 ;
		   
		  
	 }
	 
	 
	 bool haswon(int row , int col , int n , char c){
	 	  bool rowmatch = true;
	 	  
	 	  for(int i = 0 ; i < n ; ++i){
	 	  	 rowmatch = rowmatch && (board[i][col] == c);
				}
				
		   }
		   
		   bool colmatch = true;
		   
		   for(int i = 0 ; i < n ; ++i){
             colmatch = colmatch && (board[row][i] == c);
			 		   	 
		   }
		   
		   
		   // checking for diagonal
		   
		   if(row + col == n-1 or row == col){
		   	  bool line1  = true;
		   	  bool line2  = true;
		   	  
		   	  for(int i  = 0 ;  i <  n ; ++i){
		   	  	 line1 = line1 && (board[i][i] == c);
				 }
				 
				 for(int i = 0 ; i < n ; ++i){
				 	 line2 = line2 && (board[n-1-i][i] == c );
				 }
				 
				 return (rowmatch or colmatch or line1 or line2);
		   }
		   
		   return (rowmatch or colmatch);
	 }
};
