#include <iostream>

using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
	int arrpos =0;
	int seqpos =0;

while(arrpos<array.size() && seqpos<sequence.size())
	{
		if(array[arrpos] == sequence[seqpos])
		{
			seqpos++;
}
		arrpos++;
	}	
			return seqpos==sequence.size();

}
