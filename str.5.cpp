#include<iostream>
using namespace std;
int main()
{
	char str[100];
	cout<<"plese enter your str:";
	cin.get(str,100);
	
	int s =0;
	for(int i = 0 ; str[i] != '\0' ; i++ )
	{
		if(str[i] == ' ')
		s++;
	}
	cout<<s+1;

	

}
	
