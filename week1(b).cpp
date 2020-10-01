#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::max;
long long  MaxPairwiseProduct(const vector<int>& numbers) {
long long  product = 0;
int n = numbers.size();
for (int i = 0; i < n; ++i) {
for (int j = i + 1; j < n; ++j) {
product = max(product, numbers[i] * numbers[j]);
}
}
return product;
}
int main() {
int n;
cin >> n;
vector<int> numbers(n);
for (int i = 0; i < n; ++i) {
cin >> numbers[i];
}
long long product = MaxPairwiseProduct(numbers);
cout << product << "\n";
return 0;
}
