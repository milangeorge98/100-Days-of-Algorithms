#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char dest, char aux)
{
	if(n==1)
	{
		cout<<"Move Disk 1 from "<<source<<" to "<<dest<<endl;
		return;		
	}
	
	towerOfHanoi(n-1, source, aux,dest);
	{
		cout << "Move disk " << n << " from " << source<<" to "<<dest<<endl; 
	}
	towerOfHanoi(n-1, aux, dest,source);
	
}

int main(){
	int n =5 ;
	towerOfHanoi(n, 'A', 'C', 'B');
	return 0;

}
