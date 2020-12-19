using namespace std;

vector<int> spiral(vector<vector<int>> array) {
  /*O(n) Time
  O(n) Space
  */
	vector<int> result={};
	int sR =0;
	int eR = array.size()-1;
	int sC =0;
	int eC = array[0].size()-1;
	
	while(sR <=eR && sC <=eC)
	{
		for(int col = sC; col <=eC; col++)
		{
			result.push_back(array[sR][col]);
		}
		
		for(int row =sR+1; row <=eR; row++)
		{
			result.push_back(array[row][eC]);
		}
		for(int col = eC-1; col >= sC; col--)
		{
			if(sR==eR)
				break;
			result.push_back(array[eR][col]);
		}
		
		for(int row=eR-1; row > sR; row--)
		{
			if(sC==eC)
				break;
		 result.push_back(array[row][sC]);
		}
		
		sR++;
		eR--;
		sC++;
		eC--;
		
	}
  return result;
}
