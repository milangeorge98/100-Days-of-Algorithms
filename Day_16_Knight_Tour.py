N = 8


def isSafe(x, y, board):

	if(x >= 0 and y >= 0 and x < N and y < N and board[x][y] == 0):
		return True
	return False


def printSolution(N, board):
	
	for i in range(N):
		for j in range(N):
			print(board[i][j], end=' ')
		print()


def solveKnightTour(N):
	

	# Initialization of Board matrix
	board = [[0 for i in range(N)]for i in range(N)]

	x = [2, 1, -1, -2, -2, -1, 1, 2]
	y = [1, 2, 2, 1, -1, -2, -2, -1]

	#Initial position of the knight
	board[0][0] = 0

	#counter 
	pos = 1

	# Checking if solution exists or not
	if(not solveRecursive(N, board, 0, 0, x, y, pos)):
		print("Solution does not exist")
	else:
		printSolution(N, board)


def solveRecursive(N, board, curr_x, curr_y, x, y, pos):
	'''
		A recursive utility function to solve Knight Tour 
		problem
	'''

	if(pos == N**2):
		return True

	#next moves from the current coordinates
	for i in range(N):
		new_x = curr_x + x[i]
		new_y = curr_y + y[i]
		if(isSafe(new_x, new_y, board)):
			board[new_x][new_y] = pos
			if(solveRecursive(N, board, new_x, new_y, x, y, pos+1)):
				return True

			# Backtracking
			board[new_x][new_y] = 0
	return False


# Driver Code
if __name__ == "__main__":
	
	# Function Call
	solveKnightTour(N)

