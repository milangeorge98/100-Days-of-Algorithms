/* C++ program for insertion sort 
Time Complexity: Worst Case Complexity: O(n2)
Best Case Complexity: O(n)
Average Case Complexity: O(n2)
Space Complexity: 0(1)

*/
#include <bits/stdc++.h> 
using namespace std; 

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) 
	{ 
		key = arr[i]; 
		j = i - 1; 

	/*Moving elements greater than the key one step ahead*/
		while (j >= 0 && arr[j] > key) 
		{ 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
		for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
	
	
} 


/* Driver code */
int main() 
{ 
	int arr[] = { 12, 11, 13, 5, 6 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	insertionSort(arr, n); 


	return 0; 
} 

// This is code is contributed by rathbhupendra 

