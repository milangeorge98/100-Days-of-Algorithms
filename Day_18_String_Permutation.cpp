<<<<<<< HEAD
#include <iostream>
using namespace std; 


//string, starting index, ending index
void permute(string a, int l, int r) 
{ 
	// Base case 
	if (l == r) 
		cout<<a<<endl; 
	else
	{ 
		// Permutation
		for (int i = l; i <= r; i++) 
		{ 

			swap(a[l], a[i]); 

			// Recursion 
			permute(a, l+1, r); 

			//backtrack 
			swap(a[l], a[i]); 
		} 
	} 
} 

// Driver Code 
int main() 
{ 
	string str = "CAR"; 
	int n = str.size(); 
	permute(str, 0, n-1); 
	return 0; 
} 


=======
#include <iostream>
using namespace std; 


//string, starting index, ending index
void permute(string a, int l, int r) 
{ 
	// Base case 
	if (l == r) 
		cout<<a<<endl; 
	else
	{ 
		// Permutation
		for (int i = l; i <= r; i++) 
		{ 

			swap(a[l], a[i]); 

			// Recursion 
			permute(a, l+1, r); 

			//backtrack 
			swap(a[l], a[i]); 
		} 
	} 
} 

// Driver Code 
int main() 
{ 
	string str = "CAR"; 
	int n = str.size(); 
	permute(str, 0, n-1); 
	return 0; 
} 


>>>>>>> e8a01dbcb868724e90ae1843306f796cf95a5c6a
