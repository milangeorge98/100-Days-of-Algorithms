# Time complexity: O(n^2) | Space Complexity: O(n)
for x in range(101):
   for y in range(x):
        if x**2 - y**2 == 100:
            print(x,y)
