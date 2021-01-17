# Python3 implementation of the approach 
cities = 4
answer = [] 

# Function to find the minimum weight 
# Hamiltonian Cycle 
def tsp(graph, cities, currentPos, n, count, cost): 

	"""When the last city has been reached and it has a link to the first city"""
	if (count == n and graph[currentPos][0]): 
		answer.append(cost + graph[currentPos][0]) 
		return

	# BACKTRACKING STEP 
	
	for i in range(n): 
		if (cities[i] == False and graph[currentPos][i]): 
			
			cities[i] = True
			tsp(graph, cities, i, n, count + 1, 
				cost + graph[currentPos][i]) 
			
			cities[i] = False

# Driver code 
# n = cities
if __name__ == '__main__': 
	cities = 4
	graph= [[ 0, 10, 15, 20 ], 
			[ 5, 0, 9, 10 ], 
			[ 6, 13, 0, 12 ], 
			[ 8, 8, 9, 0 ]] 

	# Boolean array to check if a node 
	# has been visited or not 
	for i in range(cities):
        v[i] = False 
	
	# Mark 0th node as visited 
	v[0] = True

	# Find the minimum weight Hamiltonian Cycle 
	tsp(graph, v, 0, cities, 1, 0) 

	# ans is the minimum weight Hamiltonian Cycle 
	print(min(answer)) 

