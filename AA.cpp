#include <iostream>
using namespace std;
 
int main() 
{
	int arr[42] = {0,};
	
	int num = 0;
	for(int i = 0; i<10;i++)
	{
		cin>>num;
		arr[num % 42]++;
	}
	
	int count = 0;
	for(int a : arr)
	{
		if(a > 0)
			count++;
	}
	
	cout<<count;
	
	return 0;
}
