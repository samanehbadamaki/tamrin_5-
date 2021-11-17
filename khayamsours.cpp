#include<iostream>
using namespace std;

void khayam(int n)
{
	int array[100][100];
	for(int line = 0 ; line < n ; line++)
	{
		for(int i =0 ; i <= line ; i++)
		{
			if(line == i || i == 0 )
			array[line][i]= 1;
			else
			array[line][i] = array[line-1][i-1]+array[line-1][i];
			cout<<array[line][i]<<" ";
		}
		cout<<"\n";
		
	}
}

int main()
{
	int n ;
	cout<<"please enter n :";
	cin>>n;
    khayam(n);
	return 0; 
}
