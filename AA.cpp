#include <iostream>
#include <climits>
using namespace std;

int main() 
{
	int n, m;
	cin>>n>>m;
	
	int* baskets = new int[n];

	//√ ±‚»≠ [1] [2] [3] [4] [5]
	for(int i = 0; i<n;i++)
	{
		baskets[i] = i+1;
	}
	
	int a,b;
	for(int i = 0 ;i < m; i++)
	{
		cin>>a>>b;
		a -= 1; b -=1;
		for(int j = a; j < b / 2 ; j++)
		{
			int temp = baskets[j];
			baskets[j] = baskets[b - j - 1];
			baskets[b-j - 1] = temp;
		}
	}
	
	for(int i = 0; i<n; i++)
	{
		cout<<baskets[i]<<' ';
	}
	
	delete[] baskets;
}
