#include <iostream>
using namespace std;

int main() 
{

	int count[6] = {1,1,2,2,2,8};	
	//ŷ 1��, ��1��, �� 2��, ���2��, ����Ʈ2��, �� 8��
	
	int temp = 0;
	for(int i =0; i<6 ; i++)
	{
		cin>>temp;
		cout<< count[i] - temp<< ' ';
	} 
	
	return 0;
}
