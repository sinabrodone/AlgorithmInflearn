#include <iostream>
using namespace std;

int main() 
{

	int count[6] = {1,1,2,2,2,8};	
	//킹 1개, 퀸1개, 룩 2개, 비숍2개, 나이트2개, 폰 8개
	
	int temp = 0;
	for(int i =0; i<6 ; i++)
	{
		cin>>temp;
		cout<< count[i] - temp<< ' ';
	} 
	
	return 0;
}
