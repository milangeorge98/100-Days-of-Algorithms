#include <iostream>

using namespace std;

#define N 4 


/* A utility function to print solution */
void printSolution(int board[N][N]) 
{ 
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < N; j++) 
			cout<<(board[i][j]); 
		cout<<("\n"); 
	} 
} 

//function to check if the postion of the queen is safe
bool isSafe(int board[N][N], int row, int col) 
{ 
	int i, j; 

	/* Check this row on left side */
	for (i = 0; i < col; i++) 
		if (board[row][i]) 
			return false; 

	/* Check upper diagonal on left side */
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--) 
		if (board[i][j]) 
			return false; 

	/* Check lower diagonal on left side */
	for (i = row, j = col; j >= 0 && i < N; i++, j--) 
		if (board[i][j]) 
			return false; 

	return true; 
} 

/* A recursive utility function to solve N 
Queen problem */
bool solveNQRecur(int board[N][N], int col) 
{ 

	if (col >= N) 
		return true; 

	for (int i = 0; i < N; i++) { 
	
		if (isSafe(board, i, col)) { 
			board[i][col] = 1; 

			if (solveNQRecur(board, col + 1)) 
				return true; 
			
			// BACKTRACK
			board[i][col] = 0;  
		} 
	} 

	return false; 
} 


bool solveNQ() 
{ 
	int board[N][N] = { { 0, 0, 0, 0 }, 
						{ 0, 0, 0, 0 }, 
						{ 0, 0, 0, 0 }, 
						{ 0, 0, 0, 0 } }; 

	if (solveNQRecur(board, 0) == false) { 
		cout<<("Solution does not exist"); 
		return false; 
	} 

	printSolution(board); 
	return true; 
} 

// driver program to test above function 
int main() 
{ 
	solveNQ(); 
	return 0; 
} 
