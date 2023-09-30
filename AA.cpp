#include <iostream>
using namespace std;
 
int main() 
{
 	int n;
 	cin>> n;
 	
 	int count = 0;
 	while(n>0)
 	{
 		count++;
 		n-=4;	
	}
	
	for(int i = 0; i<count; i++)
	{
		cout<< "long ";
	}
	
	cout<<"int";
	return 0;
}
